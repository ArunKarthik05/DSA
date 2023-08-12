#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	for(int i=0;i<s1.size()-1;i++)
	{
		for(int j=0;j<s1.size()-i-1;j++)
		{
		if(s1.size()!=s2.size())
			break;
		if(s1[j]>s1[j+1])
			swap(s1[j],s1[j+1]);
		if(s2[j]>s2[j+1])
			swap(s2[j],s2[j+1]);
		}
	}
	if(s1==s2)
		cout<<"Anagram";
	else
		cout<<"Not an anagram";	
}
