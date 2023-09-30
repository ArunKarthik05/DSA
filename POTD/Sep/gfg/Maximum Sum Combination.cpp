vector<int> maxCombinations(int N, int K, vector<int> &A, vector<int> &B) {
        // code here
        vector<int>ans;
        sort(A.begin(),A.end() );
        sort( B.begin(),B.end() );
        priority_queue<pair<int,pair<int,int>>> pq;
        set<pair<int,int>>s;
        pq.push({A.back()+B.back(),{N-1,N-1}});
        s.insert({N-1,N-1});
        while(K--){
            auto p= pq.top();
            int sum = p.first;
            int x = p.second.first;
            int y = p.second.second;
            ans.push_back(sum);
            pq.pop();
            
            if( s.find({x-1,y})==s.end() ){
                pq.push({A[x-1]+B[y],{x-1,y}});
                s.insert({x-1,y});
            }
            if( s.find({x,y-1})==s.end() ){
                pq.push({A[x]+B[y-1],{x,y-1}});
                s.insert({x,y-1});
            }
        }
        return ans;
    }
