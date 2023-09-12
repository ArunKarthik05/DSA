int minDeletions(string s) 
    {
        int ans=0;
        unordered_map<char,int>freq;
        for(char ch:s)
        {
            freq[ch]++;
        }
        unordered_set<int>used_freq;
        for (const auto& pair : freq)
        {
            int cur_freq = pair.second;
            while (used_freq.count(cur_freq) > 0 && cur_freq > 0) 
            {
            cur_freq--;
            ans++;
            }

                if (cur_freq > 0) {
                used_freq.insert(cur_freq);
            }
        }
        return ans;
    }
