const int MAXV = 1000; //最大顶点数
const int INF = 1000000000; //无穷大

/* 邻接矩阵版DFS */
int n, G[MAXV][MAXV]; //顶点数n
bool vis[MAXV] = {false}; //如果顶点i已被访问，则vis[i] = true

void DFS(int u, int depth) { // u为当前访问顶点，depth为深度
    vis[u] = true;
    //对u出发能抵达的分支顶点枚举
    for(int v = 0; v < n;v++){
        if(vis[v] = false && G[u][v] != INF){ // v未被访问，且u->v 可以抵达
            DFS(v, depth + 1); // 访问v，且深度+1
        }
    }
}

void DFSTrave() { //遍历图G
    for(int u = 0; u < n; u++){ //对每个u，若未被访问，则DFS，并且是第一层
        if(vis[u] == false){
            DFS(u, 1);
        }
    }
}


/* 邻接表版DFS */
#include<vector>
using namespace std;

vector<int> Adj[MAXV]; //图G的邻接表
int n; //顶点数
bool vis[MAXV] = {false}; //如果顶点i已被访问，则vis[i] = true

void DFS(int u, int depth){
    vis[u] = true;
    for(int i=0; i<Adj[u].size(); i++){
        int v = Adj[u][i];
        if(vis[v] == false){
            DFS(v, depth+1);
        }
    }
}

void DFSTrave(){
    for(int u=0; u<n; u++){
        if(vis[u] == false){
            DFS(u, 1);
        }
    }
}