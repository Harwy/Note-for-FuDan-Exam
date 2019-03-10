/*
解题分析：
已知后序遍历序列和中序遍历序列
后序遍历的最后一位是根节点；
根节点在中序遍历序列中分开左右子树
*/
#include<cstdio>
#include<queue>

using namespace std;
const int maxn = 50;

struct node{
    int data;
    node* lchild;
    node* rchild;
};

int pre[maxn], in[maxn], post[maxn];
int n; //结点个数

node* create(int postL, int postR, int inL, int inR){
    if(postL > postR){
        return NULL;
    }
    node* root = new node;
    root->data = post[postR];
    int k;
    for(k=inL;k<=inR;k++){
        if(in[k] == post[postR]){
            break;
        }
    }
    int numLeft = k - inL;
    root->lchild = create(postL, postL+numLeft-1, inL, k-1);
    root->rchild = create(postL+numLeft, postR-1,k+1,inR);

    return root;
}

int num = 0; //已输出的结点个数
void BFS(node* root){
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        node* now = q.front();
        q.pop();
        printf("%d", now->data);
        num++;
        if(num<n) printf(" ");
        if(now->lchild != NULL) q.push(now->lchild);
        if(now->rchild != NULL) q.push(now->rchild);
    }
}

int main(){
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &post[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d", &in[i]);
    }
    node* root = create(0,n-1,0,n-1);
    BFS(root);
    return 0;
}

