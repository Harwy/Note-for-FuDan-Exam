#include<queue>
using namespace std;
const int MAXV = 1010;
const int INF = 1000000000;

//邻接矩阵版
int n, G[MAXV][MAXV]; //n为顶点数，MAXV为最大顶点数
bool inq[MAXV] = {false}; //若顶点i曾入过队，则inq[i] = true;

void BFS(int u){ //遍历u所在的连通块
    queue<int> q;
    q.push(u);
    inq[u] = true;
    while(!q.empty()){ //队列非空
        int u = q.front();
        q.pop();
        for(int v = 0; v<n; v++){
            //u临接的v没有入队
            if(inq[v]==false && G[u][v] != INF){
                q.push(v);
                inq[v] = true;
            }
        }
    }
}

void BFSTrave(){
    for(int u=0; u<n; u++){
        if(inq[u] == false){
            BFS(u);
        }
    }
}

//邻接表版
vector<int> Adj[MAXV]; //图G，Adj[u]存放从顶点u出发能到达的所有顶点
int n;
bool inq[MAXV] = {false};

void BFS(int u){
    queue<int> q;
    q.push(u);
    inq[u] = true;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int i = 0; i<Adj[u].size(); i++){
            int v = Adj[u][i];
            if(inq[v] == false){
                q.push(v);
                inq[v] = true;
            }
        }
    }
}

void BFSTrave(){
    for(int u = 0; u < n; u++){
        if(inq[u] == false){
            BFS(u);
        }
    }
}