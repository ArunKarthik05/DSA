#include<bits/stdc++.h>
using namespace std;
bool print(int n)
{
	if(n<10 && n%10==5 ||n%10==0)	
		return true;
	else 
		return false;
	if(n%10==5 ||n%10==0)
		return true;
	print(n/10);
}
int main()
{
	int digt,num;
	cin>>digt>>num;
	bool re_arrange=print(num);
	cout<<re_arrange;
}
