#include<bits/stdc++.h>
using namespace std;
bool comp(map<int,int>&a , map<int,int>&b)
{
	if(a.second==b.second)
	{
		return a.first>a.second;
	}
	return a.second>b.second;
}
int main()
{
	int n,num;
	cin>>n;
	set<int>s;
	map<int,int>m;
	while(n--)
	{
		cin>>num;
		m[num]++;
	}
	sort(m.begin(),m.end(),comp);
	for(auto x:m)
	{
		while(x.second){
		cout<<x.first<<" ";
		x.second--;
	}
	}
}
