 vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>> ans;
        for(int i=0;i<numRows;i++){
            vector<int>temp;
            temp.push_back(1);
            int j=1;
            while(j<i){
                temp.push_back(ans[i-1][j-1]+ans[i-1][j]);
                j++;
            }
            if(i>0) temp.push_back(1);
            ans.push_back(temp);
        }
        return ans;        
    }
