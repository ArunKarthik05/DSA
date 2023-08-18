#include<bits/stdc++.h>
using namespace std;
bool isSubsequence(string &s,string &t)
{
	int p1=0,prev=-1;
        bool found=true;
        while(p1<s.size() && found){
            auto it=find(t.begin()+prev+1,t.end(),s[p1]);
            int curr=distance(t.begin(),it);
            //cout<<"\n"<<curr;
            if(curr>=prev && curr<t.size()){
                prev=curr;
            }
            else
                found=false;
            p1++;
        }
    return found;
}
int main()
{
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	cout<<"\n"<<isSubsequence(s1,s2);
}
