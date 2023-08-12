#include<bits/stdc++.h>
using namespace std;
int main()
{
string str;
cout<<"Enter the string:";
getline(cin,str);
vector<int>v;
int num;
for(int i=0;i<str.size();i++)
{
	num=0;
	while(isdigit(str[i]))
	{
	num=(num*10)+str[i]-48;
	i++;
	}
	v.push_back(num);
}
cout<<"\nThe numbers in the string are:";
for(int i=0;i<v.size();i++)
{
	if(v.at(i)>0)
		cout<<v.at(i)<<" ";
}
cout<<"\nThe max element is:"<<*max_element (v.begin(),v.end());
}
