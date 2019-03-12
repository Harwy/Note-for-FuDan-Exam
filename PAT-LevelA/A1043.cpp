#include<stdio.h>
#include<vector>
using namespace std;
struct node {
    int data;
    node *left, *right;
};

void insert(node* &root, int data){
    if(root == NULL){ //空结点，在当前结点插入
        root = new node;
        root->data = data;
        root->left = root->right = NULL;
        return;
    }
    if(data < root->data) insert(root->left, data);  //插在左子树
    else insert(root->right, data); //插在右子树
}

void preOrder(node* root, vector<int>&vi){ //先序遍历，结果存在vi
    if(root == NULL) return;
    vi.push_back(root->data);
    preOrder(root->left, vi);
    preOrder(root->right, vi);
}

//镜像树先序遍历，结果存放在vi
void preOrderMirror(node* root, vector<int>&vi){
    if(root == NULL) return;
    vi.push_back(root->data);
    preOrderMirror(root->right, vi);
    preOrderMirror(root->left, vi);
}

void postOrder(node* root, vector<int>&vi){ //后序遍历，结果存放于vi
    if(root == NULL) return; //判空
    postOrder(root->left, vi);
    postOrder(root->right, vi);
    vi.push_back(root->data);
}

void postOrderMirror(node* root, vector<int>&vi){
    if(root == NULL) return; //判空
    postOrderMirror(root->right, vi);
    postOrderMirror(root->left, vi);
    vi.push_back(root->data);
}

//origin存放初始序列
//pre,post为先序、后序，preM，postM为镜像树先序、后序
vector<int> origin, pre, post, preM, postM;

int main(){
    int n, data;
    node* root = NULL;
    scanf("%d", &n); //输入结点数
    for(int i=0; i<n; i++){
        scanf("%d", &data);
        origin.push_back(data);
        insert(root, data);
    }
    preOrder(root, pre);
    preOrderMirror(root, preM);
    postOrder(root, post);
    postOrderMirror(root, postM);
    if(origin == pre){
        printf("YES\n");
        for(int i=0; i<post.size(); i++){
            printf("%d", post[i]);
            if(i < post.size() - 1) printf(" ");
        }
    }else if (origin == preM){
        printf("YES\n");
        for(int i=0; i<postM.size(); i++){
            printf("%d", postM[i]);
            if(i < postM.size() - 1) printf(" ");
        }
    }else{
        printf("NO\n");
    }
    return 0;
}

