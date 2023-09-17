    public:
    //Function to return list containing first n fibonacci numbers.
    int helper(int i, int n, vector<int>&dp)
    {
        if(i==n)    return;
        if(dp[i]!= -1)  return dp[i];
        dp[i++]= helper(i-1,n,dp)+ helper(i-2,n,dp);
        return dp[n-1];
    }
    vector<long long> printFibb(int n) 
    {
        //code here
        vector<long long>dp(n+1,-1);
        dp[0]=dp[1]=1;
        helper(2,n,dp);
        // return dp[n-1];
    }
