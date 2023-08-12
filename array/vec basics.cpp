//Video link-https://www.youtube.com/live/AUPLWa6gbIQ?feature=share
#include<bits/stdc++.h>
using namespace std;
void print(vector<int> &vec)
{
	cout<<"\nVector is:";
	for(auto x:vec)
	{
		cout<<x<<" ";
	}
}
void reverse(vector<int> &vec)
{
	sort(vec.begin(),vec.end());
	reverse(vec.begin(),vec.end());
	cout<<"\nReverse:";
	for(auto x:vec){
		cout<<x<<" ";
	}
}
void find_max(vector<int> &vec)
{
	int max= *max_element(vec.begin(),vec.end());
	cout<<"\nmax:"<<max;
}
void find_sum(vector<int> &vec)
{
	int sum=0;
	sum=accumulate(vec.begin(),vec.end(),0);
	cout<<"\nsum:"<<sum;
}
void find_count(vector<int> &vec)
{
	cout<<"\nCount of every element:"<<endl;
	for(auto x:vec)
	{
		int cnt=count(vec.begin(),vec.end(),x);
		cout<<x<<":"<<cnt<<endl;
	}
}
void find_element(vector<int> &vec)
{
	int f;
	cout<<"\nEnter the num you want to find:",cin>>f;
	auto it=find(vec.begin(),vec.end(),f);
	//subract the iterator adress from start to get the index value
	int ans=it-vec.begin();
	if(it==vec.end())
		cout<<"Not found..";
	else
		cout<<"\nFound at "<<ans;
}
void find_binary(vector<int> &vec)
{
	reverse(vec.begin(),vec.end());
	int f;
	cout<<"\nEnter the num you want to find:",cin>>f;
	bool ans=binary_search(vec.begin(),vec.end(),f);
	if(ans==1)
		cout<<"\nFound..";
	else
		cout<<"\n Not Found..";
}
void lower_bound(vector<int> &vec)
{
	int n;
	cout<<"\nenter the value for lower bound:",cin>>n;
	auto it=lower_bound(vec.begin(),vec.end(),n);
	cout<<"\nThe first value not less than "<<n<<" is:";
	int val=it-vec.begin();
	cout<<vec[val];
}
void upper_bound(vector<int> &vec)
{
	int n;
	cout<<"\nenter the value for upper bound:",cin>>n;
	auto it=upper_bound(vec.begin(),vec.end(),n);
	cout<<"\nThe first value greater than "<<n<<" is:";
	int val=it-vec.begin();
	cout<<vec[val];
}
void find_min_tc(vector<int> &vec)
{
	int n;
	cout<<"\nEnter the val to find using O(n):",cin>>n;
	int val=lower_bound(vec.begin(),vec.end(),n)-vec.begin();
	if(val<=vec.size() && vec[val]==n)
		cout<<"\nFound at "<<val;
	else
		cout<<"\nNot found..";
}
void last_occ(vector<int> &vec)
{
	int n;
	cout<<"\nEnter the val to find the index of last occ in the vector:",cin>>n;
	int inx=upper_bound(vec.begin(),vec.end(),n)-vec.begin();
	inx-=1;
	if(vec[inx]==n)
		cout<<"\nThe last occ of "<<n<<" is:"<<inx;
	else
		cout<<"\nThe el doesnt exsist";
}
void count_logn(vector<int> &vec)
{
	int n;
	cout<<"\nEnter the val to find the occ in the vector:",cin>>n;
	int ub=upper_bound(vec.begin(),vec.end(),n)-vec.begin();
	int lb=lower_bound(vec.begin(),vec.end(),n)-vec.begin();
		cout<<"\nThe element occurs "<<ub-lb<<" times"<<endl;
}
int main()
{
	int n,num;
	cout<<"enter no of el:",cin>>n;
	vector<int>vec;
	while(n--)
	{
		cout<<"enter el:",cin>>num;
		vec.push_back(num);
	}
	print(vec);
	reverse(vec);
	//MAX
	find_max(vec);
	//SUM
	find_sum(vec);
	//COUNT
	find_count(vec);
	//FIND
	find_element(vec);
	//Binary_search-works on only sorted array
	//T.C=log N
	find_binary(vec);
	print(vec);
	//only on sorted arrays
	//return the first value not less than the given no
	//log N
	lower_bound(vec);
	//returns the first val greater than then given number
	upper_bound(vec);
	//Find the 1st index of the element if its present in O(n)
	find_min_tc(vec);
	//Find the last occ of x
	last_occ(vec);
	//The count of a given varibale with O(2*log N)
	count_logn(vec);
}
