class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    int mod=1e9 + 7;
    long long helper(int n,vector<int> &dp)
    {
        if(n==0 or n==1)    return 1;
        if(n==2)    return 2;
        if(dp[n] != -1) return dp[n];
        int ways1 = helper(n-1,dp);
        int ways2 = helper(n-2,dp);
        int ways3 = helper(n-3,dp);
        return dp[n] = ((ways1%mod + ways2%mod)%mod + ways3%mod) %mod;
    }
    long long countWays(int n)
    {
       vector<int>dp(n+1,-1);
       long long ans = helper(n,dp);
       return ans;
    }
};
