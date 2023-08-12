#include <iostream>
using namespace std;
int main()
{    
	int n,reverse=0;
	cin>>n;
	printf("before reverse = %d",n);   
	while(n!=0){        
		reverse = reverse*10 + n%10;       
		n=n/10;    
	}
	printf("\nafter reverse = %d",reverse);    
	return 0;
} 
