#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,num;
	cin>>n;
	vector<int>vec;
	while(n--)
	{
		cin>>num;
		vec.push_back(num);
	}
	sort(vec.begin(),vec.end());
	reverse(vec.begin(),vec.end());
	cout<<"Reverse:";
	for(auto x:vec){
		cout<<x<<" ";
	}
}
