const int mod=1e9 + 7;
	int ways(int i,int sum,int arr[],int n,vector<vector<int>>&dp)
	{
	    if(sum==0 and i==n) return 1;
	    if(i>=n or sum<0)  return 0;
	    if( dp[i][sum] != -1)   return dp[i][sum];
	    int pick = ways(i+1,sum-arr[i],arr,n,dp);
	    int not_pick = ways(i+1,sum,arr,n,dp);
	    return dp[i][sum] = (pick%mod+not_pick%mod)%mod;
	}
	int perfectSum(int arr[], int n, int sum)
	{
        // Your code goes here
        int total=0;
        for(int i=0;i<n;i++){
            total+= arr[i];
        }
        if(total< sum)  return 0;
        vector<vector<int>> dp(n+1,vector<int>(total+1,-1));
        int ans = ways(0,sum,arr,n,dp);
        return ans;
	}
	  
