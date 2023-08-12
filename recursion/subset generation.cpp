#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> subsets;
void generate(vector<int>&nums,int i,vector<int>&subset)
{
	if(i==nums.size())	
	{
		subsets.push_back(subset);
		return;
	}
	generate(nums,i+1,subset);
	subset.push_back(nums[i]);
	generate(nums,i+1,subset);
	subset.pop_back();
	
}
int main()
{
	vector<int>nums;
	int n,num;
	cout<<"Enter no of values:",cin>>n;
	while(n--)
	{
		cout<<"Enter value:",cin>>num;
		nums.push_back(num);
	}
	vector<int>subset;
	generate(nums,0,subset);
	for(auto subset:subsets)
	{
		for(auto ele:subset)
		{
		cout<<ele<<" ";
		}
	cout<<endl;
	}
}
