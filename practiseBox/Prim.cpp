/*
Input:
6 10
0 1 4
0 4 1
0 5 2
1 2 6
1 5 3
2 3 6
2 5 5
3 4 4
3 5 5
4 5 3
--------
Output:
15
*/
#include<stdio.h>
#include<algorithm>
using namespace std;

const int MAXV = 1000;
const int INF = 1000000000;

//邻接矩阵版Prim
int n, m, G[MAXV][MAXV];
int d[MAXV]; //顶点与集合S的最短距离
bool vis[MAXV] = {false};

int prim(){ //默认0号为初始点，函数返回最小生成树的边权之和
    fill(d, d+MAXV, INF);
    d[0] = 0;
    int ans = 0; //存放最小生成树的边权之和
    for(int i = 0; i < n; i++){
        int u = -1, MIN = INF;
        for(int j = 0; j < n; j++){
            if(vis[j] == false && d[j] < MIN){
                u = j;
                MIN = d[j];
            }
        }
        //找不到小于INF的
        if(u == -1) return -1;
        vis[u] = true; //标记u已被访问
        ans += d[u]; //将与集合S距离最小的边加入最小生成树
        for(int v = 0; v < n; v++){
            //v未被访问 && u能抵达v && 以u为中介点可以使v离集合S更近
            if(vis[v] == false && G[u][v] != INF && G[u][v] < d[v]){
                d[v] = G[u][v];
            }
        }
    }
    return ans;
}

int main(){
    int u, v, w;
    scanf("%d%d", &n, &m);
    fill(G[0], G[0]+MAXV*MAXV, INF);
    for(int i = 0; i < m; i++){
        scanf("%d%d%d", &u, &v, &w);
        G[u][v] = G[v][u] = w;
    }
    int ans = prim();
    printf("%d\n", ans);
    return 0;
}
