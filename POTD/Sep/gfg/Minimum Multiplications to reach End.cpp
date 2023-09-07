int minimumMultiplications(vector<int>& arr, int start, int end) {
        // code here
        if(start == end)    return 0;
        
        vector<int>vis(1e5,0);
        queue<pair<int,int>>q;
        q.push({start,0});
        vis[start]=1;
        while(!q.empty()){
            int val = q.front().first;
            int dist = q.front().second;
            q.pop();
            for(int i=0;i<arr.size();i++){
                int new_val = (arr[i] * val) % 100000;
                if(new_val == end)  return dist+1;
                if(!vis[new_val]){
                    q.push({new_val,dist+1});
                    vis[new_val]=1;
                }
            }
        }
        return -1;
    }
