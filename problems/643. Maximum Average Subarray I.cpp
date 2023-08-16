class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size(),sum=0;
        if(n<k) return -1.0;
        for(int i=0;i<k;i++){
               sum+=nums[i];   
        }
        int start=0,curr_max=sum;
        for(int i=0;i<n-k;i++)
        {
            sum =sum-nums[i]+nums[i+k];
            curr_max=max(sum,curr_max);
        }
        return (double)curr_max/double(k);
    }
};
