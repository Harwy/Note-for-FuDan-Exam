#include<vector>
#include<queue>
using namespace std;

const int MAXV = 1010;

vector<int> G[MAXV]; //邻接表
int n, m, inDegree[MAXV]; //顶点数，入度

//拓扑排序
bool topologicalSort() {
    int num = 0;
    queue<int> q;
    for(int i = 0; i < n; i++){
        if(inDegree[i] == 0){
            q.push(i); //将所有入度为0的顶点入队
        }
    }
    while(!q.empty()){
        int u = q.front();
        //printf("%d", u);
        q.pop();
        for(int i = 0; i < G[u].size(); i++){
            int v = G[u][i];
            inDegree[v]--;
            if(inDegree[v] == 0){
                q.push(v);
            }
        }
        G[u].clear(); //清空顶点u的所有出边
        num++;
    }
    if(num == n) return true;
    else return false;
    
}