/*
N M S
带有权值的树
求从根节点到叶子节点的路径，使得权值为S
*/
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

const int maxn = 110;
struct node{
    int weight; //权值
    vector<int> child; //子节点指针
}Node[maxn];

bool cmp(int a, int b){
    return Node[a].weight > Node[b].weight; //结点按权值从大到小排列
}

int n,m,S; //结点数，边数，给定和
int path[maxn];

// 当前访问结点为index，numNode为当前路径path上的结点个数
// sum为当前的结点点权和
void DFS(int index, int numNode, int sum){
    if(sum > S) return;
    if(sum == S){
        if(Node[index].child.size() != 0) return; //未抵达叶子节点
        for(int i = 0; i < numNode; i++){
            printf("%d", Node[path[i]].weight);
            if(i < numNode-1) printf(" ");
            else printf("\n");
        }
        return;
    }
    for(int i=0; i<Node[index].child.size(); i++){
        int child = Node[index].child[i];
        path[numNode] = child;
        DFS(child, numNode+1, sum+Node[child].weight);
    }

}

int main(){
    scanf("%d%d%d", &n, &m, &S);
    for(int i=0; i<n; i++){
        scanf("%d", &Node[i].weight);
    }
    int id, k, child;
    for(int i=0; i<m; i++){
        scanf("%d%d", &id, &k);
        for(int j=0; j<k; j++){
            scanf("%d", &child);
            Node[id].child.push_back(child);
        }
        sort(Node[id].child.begin(), Node[id].child.end(), cmp);
    }
    path[0] = 0;
    DFS(0, 1, Node[0].weight);
    return 0;
}
