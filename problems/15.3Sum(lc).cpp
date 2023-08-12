#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
vector<vector<int>> threeSum(vector<int>& nums) 
    {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(i>0 && nums[i]==nums[i-1])   continue;
            int j=i+1;
            int k=nums.size()-1;
            while(j<k)
            {
                int sum=nums[i]+nums[j]+nums[k];
               // cout<<sum;
                if(sum<0)
                {
                    j++;
                }
                else if(sum>0)
                {
                    k--;
                }
                else if(sum==0)
                {
                    vector<int>temp={nums[i],nums[j],nums[k]};
                    ans.push_back(temp);
                    j++;k--;
                    while(j<k && nums[j]==nums[j-1])  j++;
                    while(j<k && nums[k]==nums[k+1])  k--;      
                }
            }
        }
        return ans;
    }
};
int main()
{
	int n,num,i=0;
	cin>>n;
	vector<int>nums(n);
	while(n--)
	{
		cin>>num;
		nums.push_back(num);
	}
	Solution ob;
	vector<vector<int>> ans=ob.threeSum(nums);
	cout<<"The values are:"<<endl;
	 for (const auto& row : ans) {
	 	cout<<"[";
        for (const auto& val : row) {
            cout << val << ",";
        }
        cout<<"]" << endl;
    }
}
