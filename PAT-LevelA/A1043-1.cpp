#include <cstdio>
#include <vector>
using namespace std;
struct Node{
    int value;
    Node *left, *right;
};

void Insert(Node* &root, int data){
    if(root == NULL){
        root = new Node;
        root -> value = data;
        root -> left = NULL;
        root -> right = NULL;
        return;
    }
    if(data < root->value) Insert(root->left, data);
    else Insert(root->right, data);
}

void PreOrder(Node* root, vector<int>& v){
    if(root == NULL) return;
    v.push_back(root->value);
    PreOrder(root->left, v);
    PreOrder(root->right, v);
}

void PreMirrorOrder(Node* root, vector<int>& v){
    if(root == NULL) return;
    v.push_back(root->value);
    PreMirrorOrder(root->right, v);
    PreMirrorOrder(root->left, v);
}

void PostOrder(Node* root, vector<int>& v){
    if(root == NULL) return;
    PostOrder(root->left, v);
    PostOrder(root->right, v);
    v.push_back(root->value);
}

void PostMirrorOrder(Node* root, vector<int>& v){
    if(root == NULL) return;
    PostMirrorOrder(root->right, v);
    PostMirrorOrder(root->left, v);
    v.push_back(root->value);
}

int main(){
    int n;
    Node* s = NULL;
    scanf("%d", &n);
    vector<int> num, pre, preM, post, postM;
    for(int i=0; i<n; i++){
        int data;
        scanf("%d", &data);
        num.push_back(data);
        Insert(s, data);
    }
    PreOrder(s, pre);
    if(num == pre){
        PostOrder(s, post);
        printf("YES\n");
        for(unsigned int i=0; i<post.size(); i++){
            printf("%d", post[i]);
            if(i < post.size()-1) printf(" ");
        }
    }
    else{
        PreMirrorOrder(s, preM);
        if(num == preM){
            PostMirrorOrder(s, postM);
            printf("YES\n");
            for(unsigned int i=0; i<postM.size(); i++){
                printf("%d", postM[i]);
                if(i < postM.size()-1) printf(" ");
            }
        }
        else printf("NO\n");
    }
    return 0;
}
