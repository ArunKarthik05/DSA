int height(Node *root){
    if(!root)
        return 0;
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    return (leftHeight>rightHeight? leftHeight:rightHeight)+1;
}
int balancefactor(Node *root){
    if(!root)
        return 0;
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    return rightHeight-leftHeight;
}
Node *leftRotation(Node *x){
    Node *y = x->right;
    Node *temp = y->left;
    
    x->right = temp;
    y->left = x;
    return y;
}
Node *rightRotation(Node *x){
    Node *y = x->left;
    Node *temp = y->right;
    
    x->left = temp;
    y->right = x;
    return y;
}
int findInorder(Node *head){
    if(!head)
        return -1;
    while(head->left){
        head = head->left;
    }
    return head->data;
}

Node* deleteNode(Node* root, int data)
{
    //add code here,
    if(!root)
        return root;
    if(root->data < data)
        root->right = deleteNode(root->right,data);
    else if(root->data > data)
        root->left = deleteNode(root->left,data);
    else{
        if(!root->left and !root->right){
            Node *temp = root;
            root = NULL;
            delete(temp);
        }
        else if(!root->right){
             Node *temp = root;
             root = root->left;
             delete(temp);
        }
        else if(!root->left){
            Node *temp = root;
             root = root->right;
             delete(temp);
        }else{
            int inorder = findInorder(root->right);
            root->data = inorder;
            root->right = deleteNode(root->right,inorder);
        }
    }
    if(!root)
        return root;
    int bff = balancefactor(root);
    if(bff>1 and balancefactor(root->right)>=0 )
        return leftRotation(root);
    else if(bff<-1 and balancefactor(root->left)<=0 )
        return rightRotation(root);
    else if(bff>1 and balancefactor(root->right)<0 ){
        root->right = rightRotation(root->right);
        return leftRotation(root);
    }else if(bff<-1 and balancefactor(root->left)>0 ){
        root->left = leftRotation(root->left);
        return rightRotation(root);
    }
    return root;
}
