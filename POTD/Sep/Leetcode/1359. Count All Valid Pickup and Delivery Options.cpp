class Solution {
public:
    const int MOD = 1e9 + 7;
    vector<long long> dp;
    int countOrders(int n) {
        dp.resize(n+1);
        dp[0] = 1;
        for(int cur_pair = 1;cur_pair <= n;cur_pair++)
        {
            dp[cur_pair] = dp[cur_pair-1] * (2*cur_pair-1) * cur_pair % MOD;
        }
        return dp[n];
    }
};
