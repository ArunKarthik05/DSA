bool subset(int i,int sum,int N,int arr[],vector<vector<int>>&dp)
    {
        if(sum == 0) return true;
        if(i>=N or sum<0)   return false;
        if(dp[i][sum] != -1)    return dp[i][sum];
        bool pick = subset(i+1,sum-arr[i],N,arr,dp);
        bool not_pick = subset(i+1,sum,N,arr,dp);
        return dp[i][sum] = pick or not_pick;
    }
    int equalPartition(int N, int arr[])
    {
        // code here
        int target=0;
        for(int i=0;i<N;i++){
            target+= arr[i];
        }
        if(target%2 != 0)   return false;
        target = target/2;
        vector<vector<int>>dp(N,vector<int>(target+1,-1));
        return subset(0,target,N,arr,dp);
    }
