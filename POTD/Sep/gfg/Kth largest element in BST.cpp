int kthLargest(Node *root, int k)
    {
        //Your code here
        int ans;
        function<void(Node*)> find = [&] (Node *cur){
        if(cur == NULL) return;
        find(cur->right);
        k--;
        if(k==0){
            ans = cur->data;
           return;
        }
           find(cur->left);
        };
        
        find(root);
        return ans;
    }
