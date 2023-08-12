#include<iostream>
using namespace std;
int main(){
	int count[100]={0},len,l;
	cin>>len;
	int arr[len];
	int x=0;
	for(int x=0;x<len;x++)
	{
		cin>>arr[x];//18
		count[arr[x]]++;//count[10]=1
	}
	l=sizeof(count)/sizeof(count[0]);
	for(int x=0;x<100;x++)
	{
		if(count[x]>1)
		{
			cout<<x<<":"<<count[x];//1:3
		}
	}
	
}
