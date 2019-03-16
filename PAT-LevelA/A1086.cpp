/**
*push的次序为先序遍历
*pop的次序为中序遍历
6
Push 1
Push 2
Push 3
Pop
Pop
Push 4
Pop
Pop
Push 5
Push 6
Pop
Pop
*/

#include<cstdio>
#include<cstring>
#include<stack>
#include<algorithm>
using namespace std;

const int maxn = 50;
struct node {
    int data;
    node* lchild;
    node* rchild;
};
int pre[maxn], in[maxn], post[maxn];
int n;  // 结点个数

node* create(int preL, int preR, int inL, int inR){
    if(preL > preR) {
        return NULL;
    }
    node* root = new node;
    root->data = pre[preL];
    int k;
    for(k = inL; k <= inR; k++){
        if(in[k] == pre[preL]){
            break;
        }
    }
    int numLeft = k - inL;
    root->lchild = create(preL + 1, preL + numLeft, inL, k-1);
    root->rchild = create(preL + numLeft + 1, preR, k+1, inR);
    return root;
}

int num = 0;
void postorder(node* root){
    if(root == NULL){
        return;
    }
    postorder(root->lchild);
    postorder(root->rchild);
    printf("%d", root->data);
    num++;
    if(num < n) printf(" ");
}

int main(){
    scanf("%d", &n);
    char str[5];
    stack<int> st;
    int x, preIndex = 0, inIndex = 0; //入栈元素，先序序列位置及中序序列位置
    for(int i = 0; i < 2*n; i++){
        scanf("%s", str);
        if(strcmp(str, "Push") == 0){ //入栈
            scanf("%d", &x);
            pre[preIndex++] = x;
            st.push(x);
        }else{
            in[inIndex++] = st.top();
            st.pop();
        }
    }
    node* root = create(0, n-1, 0, n-1); //建树
    postorder(root);
    return 0;
}
