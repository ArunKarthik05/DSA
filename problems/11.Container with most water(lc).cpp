#include<bits/stdc++.h>
using namespace std;
int max_val;
int findHeight(vector<int> &height,int &max_val)
{
	int j=height.size()-1,i=0;
	//cout<<"j="<<j<<endl;
		while(i<j)
		{
			int min_val=min(height[i],height[j]);
			int sum=(j-i)*min_val;
			//cout<<"sum="<<sum;
				if(sum>max_val)
				{
					max_val=sum;
				}
				if(height[i]<height[j])
					i++;
				else
					j--;
		}
		return max_val;
}
int main()
{
int n,i=0,num,max_val=0;
cin>>n;
vector<int>height;
while(i<n)
{
	cin>>num;
	height.push_back(num);
	i++;
}
findHeight(height,max_val);
cout<<"The max height of container is:"<<max_val;
}
