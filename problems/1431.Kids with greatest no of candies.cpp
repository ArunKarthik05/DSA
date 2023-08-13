class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int rem) {
        auto it=max_element(candies.begin(),candies.end());
        int i=0;
        vector<bool> arr(candies.size());
        while(i<candies.size()){
            if(candies[i]+rem >= *it)
                arr[i++]=true;
            else
                arr[i++]=false;
        }
        return arr;
    }
};
