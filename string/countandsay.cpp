#include<bits/stdc++.h>
using namespace std;
int count(int n)
{
	string str="1";
	for(int i=2;i<=n;i++)
	{
		string prev=str;
		int len=str.size();
		int j=0;
		str="";
		while(j<len)
		{
			int count=j;
			while(j<len && prev[j]==prev[count])
			{
				count++;
			}
			str+=to_string(count-j)+prev[j];
			j=count;
		}
	}
	cout<<str;
}

int main()
{
	int n;
	cout<<"enter n value:";
	cin>>n;
	count(n);
}
