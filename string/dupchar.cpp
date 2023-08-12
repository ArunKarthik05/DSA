#include<bits/stdc++.h>
using namespace std;
void count(string str,map<char,int> &m)
{
	for(int i=0;i<str.size();i++)
	{
		m[str[i]]++;
	}
}
int main()
{
	string str;
	cout<<"Enter string:";
	cin>>str;
	map<char,int>m;
	count(str,m);
	for(auto x:m)
	{
		if(x.second>1)
		{
			cout<<x.first<<" is repeated "<<x.second<<" times."<<endl;
		}
	}
}
