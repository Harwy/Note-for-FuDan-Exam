


// search函数查找二叉树中数据域为x的结点
void search(node* root, int x){
    if(root == NULL){
        return; //search failed
    }
    if(x == root->data){
        //search succeeded
    }else if(x < root->data){
        search(root->lchild, x);
    }else{
        search(root->rchild, x);
    }
}

// insert函数在二叉树中插入一个数据域为x的新结点
void insert(node* &root, int x){
    if(root == NULL){
        root = newNode(x);
        return; //search failed，建立新结点
    }
    if(x == root->data){
        return; // 查找成功，结点已存在，直接返回
    }else if(x < root->data){
        insert(root->lchild, x);
    }else{
        insert(root->rchild, x);
    }
}

// 二叉树的建立
node* Create(int data[], int n){
    node* root = NULL;
    for(int i=0; i<n; i++){
        insert(root, data[i]);
    }
    return root;
}
