#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > subsets; 
void generate(vector<int> &subset,int i,vector<int> &nums)
{
	if(i==nums.size() ){
		subsets.push_back(subset);
		return;
	}
	generate(subset,i+1,nums);
	subset.push_back(nums[i]);
	generate(subset,i+1,nums);
	subset.pop_back();
}
int main()
{
	int n;
	cout<<"enter n val:",cin>>n;
	vector<int>nums(n);
	for(int i=0;i<n;i++)
		cout<<"Enter vector val:",cin>>nums[i];
	vector<int>empty;
	generate(empty, 0,nums);
	for(auto subset:subsets){
		for(auto ele:subset){
			cout<<ele<<" ";
		}
		cout<<endl;
	}
}
