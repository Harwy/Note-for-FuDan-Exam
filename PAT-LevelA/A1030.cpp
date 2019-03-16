/*
city highway cost
shortest path between start and destination
if not unique, output the min cost one
N     M         S      D
city  highway   start  destination
---------
c1 c2 dis cost
--------
Output:
start-------destination  total dis  total cost

*/
#include<stdio.h>
#include<cstring>
#include<algorithm>
using namespace std;

const int MAXV = 510;
const int INF = 1000000000;

int n, m, start, destin, G[MAXV][MAXV], cost[MAXV][MAXV];
//d为最短路径，c路径总价，cost价格，dis[i]=u记录u->i是最短路径
int d[MAXV], c[MAXV], pre[MAXV];
bool vis[MAXV] = {false};

void Dijkstra(int s){
    fill(d, d+MAXV, INF);
    fill(c, c+MAXV, INF);
    for(int i = 0; i < n; i++) pre[i] = i;
    d[s] = 0; //起点到自身距离0
    c[s] = 0; //起点到自身花费0
    for(int i = 0; i<n; i++){ //循环n次
        int u = -1, MIN = INF; //u使d[u]最小，MIN存放最小的d[u]
        for(int j = 0; j < n; j++){
            if(vis[j] == false && d[j] < MIN){
                u = j;
                MIN = d[j];
            }
        }
        if(u == -1) return;
        vis[u] = true;
        for(int v = 0; v < n; v++){
            if(vis[v] == false && G[u][v] != INF){
                if(d[u] + G[u][v] < d[v]){
                    d[v] = d[u] + G[u][v];
                    c[v] = c[u] + cost[u][v];
                    pre[v] = u; //v的前驱是u
                }else if(d[u] + G[u][v] == d[v]){
                    if(c[u] + cost[u][v] < c[v]){
                        c[v] = c[u] + cost[u][v];
                        pre[v] = u;
                    }
                }
            }
        }
    }
}

void DFS(int v){
    if(v == start){
        printf("%d ", v);
        return;
    }
    DFS(pre[v]);
    printf("%d ", v);
}

int main(){
    scanf("%d%d%d%d", &n, &m, &start, &destin);
    int u, v;
    fill(G[0], G[0]+MAXV*MAXV, INF);
    for(int i = 0; i < m; i++){
        scanf("%d%d", &u, &v);
        scanf("%d%d", &G[u][v], &cost[u][v]);
        G[v][u] = G[u][v];
        cost[v][u] = cost[u][v];
    }
    Dijkstra(start);
    DFS(destin); //执行打印
    printf("%d %d\n", d[destin], c[destin]);
    return 0;
}
