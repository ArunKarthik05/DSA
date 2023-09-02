class Solution {
public:
    int f(int index,string& s,unordered_map<string,bool>&mp,vector<int>&dp)
    {
        if(index >= s.size() )  return 0;

        if(dp[index]!= -1)  return dp[index];
        string cur="";
        int res = s.size();
        for(int i=index;i<s.size();i++){
            cur.push_back(s[i]);
            int extra = cur.size();
            if(mp[cur])
                extra = 0;
            extra+=f(i+1,s,mp,dp);
            res= min(res,extra);
        }
        return dp[index] = res;
    }
    int minExtraChar(string s, vector<string>& dictionary) 
    {
        unordered_map<string,bool>mp;
        for(auto x:dictionary)
            mp[x]=true;
        vector<int>dp(s.size(),-1);
        return f(0,s,mp,dp);
    }
};
