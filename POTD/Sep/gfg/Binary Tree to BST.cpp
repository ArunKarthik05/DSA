Node *binaryTreeToBST (Node *root)
    {
        //Your code goes here
        vector<int>ans;
        function<void(Node*)> dfs = [&](Node *cur){
            if(cur == NULL) return;
            dfs(cur->left);
            ans.push_back(cur->data);
            dfs(cur->right);
        };
        dfs(root);
        sort( ans.begin(),ans.end(),greater<int>() );
        function<void(Node*)>build = [&](Node * cur){
            if(cur==NULL)   return;
            build(cur->left);
            cur->data = ans.back();
            ans.pop_back();
            build(cur->right);
        };
        build(root);
        return root;
    }
