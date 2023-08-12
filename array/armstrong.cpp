#include<stdio.h>
#include<math.h>
#include<conio.h>
void main(){
	int number,digits=0,n,result=0,number1,temp;
	printf("enter the number:");
	scanf("%d",&number);
	number1=number;
	temp=number;
	while(number!=0){
		number=number/10;
		digits++;
	}
	while(number1!=0){
		n=number1%10;
		result=result+pow(n,digits);
		number1=number1/10;
		}
	if(temp==result)
		printf("number is armstrong");
		else
		printf("not a armstrong");
	getch();
} 
