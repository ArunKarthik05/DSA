#include<bits/stdc++.h>
using namespace std;
void print_after(int n)
{
	int j=0;
	if(n==0) 
		return;
	print_after(n-1);
	while(j<n)
	{
	cout<<j+1<<" ";
	j++;
	}
	cout<<endl;
}
void print_before(int n)
{
	int j=0;
	if(n==0) 
		return;
	while(j<n)
	{
	cout<<j+1<<" ";
	j++;
	}
	cout<<endl;
	print_before(n-1);
}
int main()
{
int n;
cin>>n;
print_after(n);
cout<<"NOW LETS PRINT FROM BASE CASE..\n";
print_before(n);
}
