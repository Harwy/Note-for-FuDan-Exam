/*
N:users的数量；  L:
*/
#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
using namespace std;

const int MAXV = 1010;
struct Node {
    int id; //结点编号
    int layer; //结点层号
};
vector<Node> Adj[MAXV]; //邻接表
bool inq[MAXV] = {false};

int BFS(int s, int L){ //start为起始结点， L为层数上限
    int numForward = 0; //转发数
    queue<Node> q;
    Node start;
    start.id = s;
    start.layer = 0;
    q.push(start);
    inq[start.id] = true;
    while(!q.empty()){
        Node topNode = q.front();
        q.pop();
        int u = topNode.id;
        for(int i = 0; i < Adj[u].size(); i++){
            Node next = Adj[u][i];
            next.layer = topNode.layer + 1;
            if(inq[next.id] == false && next.layer <= L){
                q.push(next);
                inq[next.id] = true;
                numForward++;
            }
        }
    }
}

int main(){
    Node user;
    int n, L, numFollow, idFollow;
    scanf("%d%d", &n, &L); //结点个数， 层数上限
    for(int i = 1; i <= n; i++){
        user.id = i; // 用户id
        scanf("%d", &numFollow); //i号用户关注的人数
        for(int j = 0; j < numFollow; j++){
            scanf("%d", &idFollow); //i号用户关注的用户编号
            Adj[idFollow].push_back(user); //边idFollow -> i
        }
    }
    int numQuery, s;
    scanf("%d", &numQuery); //查询个数
    for(int i = 0; i < numQuery; i++){
        memset(inq, false, sizeof(inq)); //inq数组初始化
        scanf("%d", &s); //起始结点编号
        int numForward = BFS(s, L);
        printf("%d\n", numForward); //输出转发数

    }
    return 0;
}
