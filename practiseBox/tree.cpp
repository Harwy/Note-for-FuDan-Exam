#include<stdio.h>

struct node{
    int data;
    node* lchild;
    node* rchild;
};

//当前先序序列区间[preL,preR],中序序列区间为[inL,inR]，返回根节点地址
node* create(int preL, int preR, int inL, int inR){
    if(preL > preR){
        return NULL; //先序序列长度小于等于0时，直接返回
    }
    node* root = new node; //新建一个新的结点，用来存放当前二叉树的根节点
    root->data = pre[preL];
    int k;
    for(k = inL;k <= inR; k++){
        if(in[k] == pre[preL]){ // 找到根节点
            break;
        }
    }
    int numLeft = k - inL; //左子树个数

    // 左子树先序区间为[preL+1, preL+numLeft],中序区间为[inL, k-1]
    // 返回左子树的根节点地址，赋值给root的左指针
    root->lchild = create(preL+1,preL+numLeft, inL, k-1);

    // 右子树先序区间为[preL+numLeft+1, preR],中序区间为[k+1, inR]
    // 返回左子树的根节点地址，赋值给root的右指针
    root->rchild = create(preL+numLeft+1, preR, k+1, inR);

    return root;

}
