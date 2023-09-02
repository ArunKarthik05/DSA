void calc_level(Node *root,int level,vector<int> &leaf)
{
    if(!root)
        return;
    if(!root->left and !root->right)
        leaf.push_back(level);
    if(root->left)
        calc_level(root->left,level+1,leaf);
    if(root->right)
        calc_level(root->right,level+1,leaf);
        
}
    int getCount(Node *root, int target_bud)
    {
        //code here
        vector<int>leaf;
        calc_level(root,1,leaf);
        sort(leaf.begin() , leaf.end());
        int curr_budjet =0,count=0;
        for(int i=0;i<leaf.size();i++){
            if(curr_budjet + leaf[i] <= target_bud){
                curr_budjet+= leaf[i];
                count++;
            }
            else    break;
        }
        return count;
    }
