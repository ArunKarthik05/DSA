class Solution {
public:
    struct State{
        int mask,node,dist;
    };
    int shortestPathLength(vector<vector<int>>& graph) {
        int n = graph.size();
        int all_vis = (1<<n)-1;//2^n-1
        queue<State> q;
        unordered_set<int>vis;
        for(int i=0;i<n;i++){
            q.push({1 << i, i, 0});
            vis.insert( (1<<i) * 16 + i);
        }

        while(! q.empty() ){
            State cur = q.front();
            q.pop();
            if(cur.mask == all_vis) return cur.dist;
            for(int neighbour : graph[cur.node]){
                int new_mask = cur.mask | (1 << neighbour);
                int hash_val = new_mask * 16 + neighbour;
                if(vis.find(hash_val) == vis.end()){
                    vis.insert(hash_val);
                    q.push({new_mask, neighbour, cur.dist +1});
                }
            }
        }
        return -1;
    }
};
