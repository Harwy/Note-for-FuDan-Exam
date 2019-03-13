#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

const int MAXV = 1000; //最大顶点数
const int INF = 1000000000; //设INF为无穷大

//邻接矩阵版 ，适用于顶点数V不超过1000


//邻接表版
struct Node {
    int v, dis; //v为边的目标顶点，dis为边权
};
vector<Node> Adj[MAXV]; //图G，Adj[u]存放从顶点u出发可以到达的所有顶点
int n;
int d[MAXV]; //起点到达各个点的最短路径长度
bool vis[MAXV] = {false};

void Dijkstra(int s){ //s为起点
    fill(d, d+MAXV, INF); //fill函数将整个d赋值为无穷大
    d[s] = 0; //起点自身距离为0
    for(int i = 0; i < n; i++){
        int u = -1, MIN = INF;
        for(int j = 0; j < n; j++){
            if(vis[j] == false && d[j] < MIN){
                u = j;
                MIN = d[j];
            }
        }
        //找不到小于INF的d[u],说明剩下的顶点和起点s都不通
        if(u == -1) return;
        vis[u] = true; //标记u已经访问
        //只有下面这个for与邻接矩阵的写法不同
        for(int j = 0; j < Adj[u].size(); j++){
            int v = Adj[u][j].v; //通过邻接表直接获得u能到达的顶点V
            if(vis[v] == false && d[u] + Adj[u][j].dis < d[v]){
                d[v] = d[u] + Adj[u][j].dis; //优化d[v]
            }
        }
    }
}

