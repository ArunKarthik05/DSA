int combinationSum4(vector<int>& nums, int target) {
        vector<unsigned long long>dp(target+1,0);
    //nums = [1,2,3]  tar=4
        dp[0] = 1;// 0 can achieved only in one way wo adding any el in nums
        for(int cur_sum = 1; cur_sum <= target; cur_sum++){
            for(int index = 0; index < nums.size(); index++){
                int cur_num = nums[index];
                if(cur_sum - cur_num >= 0)
                    dp[cur_sum] += dp[cur_sum - cur_num];
                    /*dp[1] += dp[0]  (1)
                      dp[2] = dp[0]+dp[1]
                                1  +  1 => dp[2] = 2
                      dp[3] = dp[0]+dp[1]+dp[2] 
                                1  +  1  + 2  =>dp[3] = 4
                      dp[4] =  dp[1] + dp[2] + dp[3]
                                1    +  2    +   4 =>dp[4] = 7 */
            }
        }
        return dp[target];
    }
