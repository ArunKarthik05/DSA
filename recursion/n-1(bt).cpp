#include<bits/stdc++.h>
using namespace std;
void rec(int n,int& sum)
{
	if(n<1)
		return;
	sum=sum+n;
	rec(n-1,sum);
}
int main()
{
	int n,sum;
	cin>>n;
	rec(n,sum);
	cout<<sum;
}
