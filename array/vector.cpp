#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> vec(10,5);
	int x=1;
	for(auto it=vec.begin();it!=vec.end();it++)
	{
		*it=x++;
		cout<<*it;
	}
}
