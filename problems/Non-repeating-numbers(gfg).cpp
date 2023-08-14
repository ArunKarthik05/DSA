 vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        int max=0,prev;
        unordered_map<int,int>count;
        for(int i=0;i<nums.size();i++)
        {
            count[nums[i]]++;
        }
        for(auto it:count)
        {
            if(it.second==1 && it.first>max)
            {
                prev=max;
                max=it.first;
            }
            else if(it.second==1 && it.first<max)
                prev=it.first;
        }
        return {prev,max};
    }
