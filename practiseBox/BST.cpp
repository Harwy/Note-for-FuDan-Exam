


// search�������Ҷ�������������Ϊx�Ľ��
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

// insert�����ڶ������в���һ��������Ϊx���½��
void insert(node* &root, int x){
    if(root == NULL){
        root = newNode(x);
        return; //search failed�������½��
    }
    if(x == root->data){
        return; // ���ҳɹ�������Ѵ��ڣ�ֱ�ӷ���
    }else if(x < root->data){
        insert(root->lchild, x);
    }else{
        insert(root->rchild, x);
    }
}

// �������Ľ���
node* Create(int data[], int n){
    node* root = NULL;
    for(int i=0; i<n; i++){
        insert(root, data[i]);
    }
    return root;
}
