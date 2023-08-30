class Solution {
public:
    long long minimumReplacement(vector<int>& nums) {
        long long int ans = 0;
        int last = nums[nums.size() - 1];
        
        for (int i = nums.size() - 2; i >= 0; i--) {
            if (nums[i] > last) {  
                // If the current element needs replacement
                int t = nums[i] / last;  
                // Calculate how many times the element needs to be divided
                if (nums[i] % last) t++; 
                // If there's a remainder, increment 't'
                last = nums[i] / t;  
                // Update 'last' for the next comparison
                ans += t - 1; 
                // Add (t - 1) to 'ans' for the number of operations
            } else {
                last = nums[i]; 
                // Update 'last' without replacement
            }
        }
        return ans; // Return the total number of operations
    }
};

