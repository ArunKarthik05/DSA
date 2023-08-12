#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	getline(cin,str);
	char r;
	cin>>r;
	int j;
	for(int i=0;i<str.size();i++)
	{
		if(str[i]==r)
		{
			j=i;
			while(j<str.size())
			{
			str[j]=str[j+1];
			j++;
			}
		}
}
	cout<<str;
}
