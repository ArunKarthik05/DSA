  vector<vector<int>> printGraph(int size, vector<pair<int,int>>edges) 
    {
        // Code here
        vector<vector<int>>ans(size);
        for(auto pair:edges){
            ans[pair.first].push_back(pair.second);
            ans[pair.second].push_back(pair.first);
        }
        return ans;
    
