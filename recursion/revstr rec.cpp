#include<bits/stdc++.h>
using namespace std;
string rev(string str)
{
	if(str.size()==0 || str.size()==1)	 return str;
	cout<<str.substr(1)+str[0]<<endl;
	return rev(str.substr(1))+str[0];
}
int main()
{
	string s;
	cin>>s;
	cout<<"\nREVERSE:"<<rev(s);

}
