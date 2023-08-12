#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int t;
	cout<<"t";
	cin>>t;
	while(t>0)
	{
	 int no_of_songs,initial_pos,val;
	 cout<<"\n no_of_songs";
	 cin>>no_of_songs;
	 int initial_order[no_of_songs];
	 cout<<"\n initial_order";
	 for(int x=0;x<no_of_songs;x++)
	 {
	 	cin>>initial_order[x];
	 }
	 cout<<"initial pos:";
	 cin>>initial_pos;
	 val=initial_order[initial_pos-1];
	 std::sort(initial_order,initial_order + no_of_songs);
	 for(int i=0;i<no_of_songs;i++)
	 {
	     if(initial_order[i]==val)
	     {
	     	cout<<"\n Found at"<<i+1<<endl;
		 }
	 }
	 t--;
	 }
	return 0;
}

