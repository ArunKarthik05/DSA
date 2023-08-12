#include<bits/stdc++.h>
using namespace std;
int find_largest(vector<int>&v,int n)
{
	if(n==1)
		return v[0];
	return max(find_largest(v,n-1),v[n-1]);
}
int main()
{
	vector<int>v;
	int n,num;
	cout<<"Enter size of vector:",cin>>n;
	while(n--)
	{
		cin>>num;
		v.push_back(num);
	}
	int len=v.size();
	cout<<find_largest(v,len);
}
