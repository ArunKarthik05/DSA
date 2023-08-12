#include<bits/stdc++.h>
using namespace std;
int main()
{
	int index,arr[5],smallest;
	for(int i=0;i<5;i++)
	{
	cin>>arr[i];
}
	for(int i=0;i<5;i++)
	{
		smallest=i;
		for(int j=i+1;j<5;j++)
		{
			if(arr[j]<arr[smallest])
			{
				smallest=j;
			}
		}
		swap(arr[i],arr[smallest]);
	}
		for(int i=0;i<5;i++)
	{
	cout<<arr[i];
}
}
