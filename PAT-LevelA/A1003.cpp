/*
分析：
城市、道路、每个城市救援队伍数量，道路长度
1.时间，道路权值最小
2.时间相同，救援队最多
输入：
N      M     C1    C2
城市数 道路数 C1=>C2
Ni
救援队数量
M行
邻接表法
*/
#include<stdio.h>
#include<string.h>
#include<algorithm>

using namespace std;

const int maxv = 520;
const int INF = 1000000000;

int G[maxv][maxv]; //图
int n, m, start, ed;
int d[maxv]; //最短路径
int weight[maxv], num[maxv], w[maxv]; //w记录最大点权之和， num记录最短路径条数
bool vis[maxv] = {false};

void Dijkstra(int s) {
    fill(d, d+maxv, INF);
    memset(w, 0, sizeof(w));
    memset(num, 0, sizeof(num));
    d[s] = 0;
    w[s] = weight[s];
    num[s] = 1;
    for(int i = 0; i<n; i++){
        int u = -1, MIN = INF;
        for(int j = 0; j<n; j++){
            if(vis[j] == false && d[j] < MIN){
                u = j;
                MIN = d[j];
            }
        }
        //找不到
        if(u == -1) return;
        vis[u] = true;
        for(int v = 0; v < n; v++){
            if(vis[v] == false && G[u][v] != INF){
                if(d[u] + G[u][v] < d[v]){
                    d[v] = d[u] + G[u][v];
                    w[v] = w[u] + weight[v];
                    num[v] = num[u];
                }else if(d[u] + G[u][v] == d[v]){
                    if(w[u] + weight[v] > w[v]){
                        w[v] = w[u] + weight[v];
                    }
                    num[v] += num[u];
                }
            }
        }
    }
}

int main(){
    scanf("%d%d%d%d", &n, &m, &start, &ed);
    for(int i = 0; i < n; i++){
        scanf("%d", &weight[i]);
    }
    int u, v;
    fill(G[0], G[0]+maxv*maxv, INF);
    for(int i = 0; i < m; i++){
        scanf("%d%d", &u, &v);
        scanf("%d", &G[u][v]);
        G[v][u] = G[u][v];
    }
    Dijkstra(start);
    printf("%d %d\n", num[ed], w[ed]);
    return 0;
}
