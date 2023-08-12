#include<bits/stdc++.h>
using namespace std;
int main()
{
	int flag=0;
    map<char,int>m;
    set<char>v;
    string str;
    getline(cin,str);
    int len=str.length();
    for(int i=0;i<len;i++)
    {
        m.push_back(str[i]);
        v.insert(str[i]);
    }
       for(auto itr:v)
        {
        	flag=0;
        	for(auto it=m.begin();it!=m.end();it++)
			{
			while(flag==0 && it->first==itr)
			{
	             cout<<it->first<<":"<<it->second;
	             flag=1;
		    } 
        	}
        	   cout<<endl;
  	    }
}
