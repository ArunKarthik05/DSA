#include <iostream>
using namespace std;

int main() { 
    int t;
    cin>>t;
    while(t>0)
    {
    int count;
    int len;
    string s;
    cin>>s;
	len=s.length();
	for(int i=0;i<len;i++)
	{
	    if(s[i]<97){s[i]=s[i]-32;}
	  if(s[i] != 'a' || s[i] != 'e' || s[i] != 'i' || s[i] != 'o' ||
	  s[i] != 'u'){
	      count++;
	  }
	   if(count>4){cout<<"YES"<<endl;}
	}
	 return 0;
	 t--;
}
}
