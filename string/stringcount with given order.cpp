#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<char,int>m;
    vector<char>v;
    string str;
    getline(cin,str);
    int len=str.length();
    for(int i=0;i<len;i++)
    {
        m[str[i]]++;
        v.push_back(str[i]);
    }
        for(auto itr:v)
        {
            for(auto it=m.begin();it!=m.end();it++)
{
            if(it->first==itr)
            {
            int v=it->second;
                while(it->second>0)
                {
                cout<<it->first;
                it->second--;
                }
            }
            } 
        }
}
