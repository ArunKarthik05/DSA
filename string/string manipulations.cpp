#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<string>v;
int n;
cout<<"Enter no of values:",cin>>n;
while(n--)
{
	string str;
	cin>>str;
	v.push_back(str);
}
for(auto itr:v)
{
	cout<<itr<<" ";
}
}
