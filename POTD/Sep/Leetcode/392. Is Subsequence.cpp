class Solution {
public:
/*
    bool isSubsequence(string s, string t) 
    {
        int p1=0,prev=-1;
        bool found=true;
        while(p1<s.size() && found){
            auto it=find(t.begin()+prev+1,t.end(),s[p1]);
            int curr=distance(t.begin(),it);
            if(curr>=prev && curr<t.size()){
                prev=curr;
            }
            else
                found=false;
            p1++;
        }
        return found;
    }
*/
  bool isSubsequence(string s, string t) 
    {
        int s1=0,s2=0;
        while( s1<s.size() and s2<t.size() ){
            if( s[s1]== t[s2] )
                s1++;
            s2++;
        }
        if(s1 < s.size() )  
            return false;
        return true;
    }
};
