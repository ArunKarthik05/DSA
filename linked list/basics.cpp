#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	struct Node* next;
};
struct Node* head;
void insert(int x)
{
	Node* temp=(Node*)malloc(sizeof(struct Node));
	temp->data=x;
	temp->next=head;
	head=temp;
}
void print()
{
	struct Node* temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
int main()
{
	int n,num;
	cout<<"Enter how many no u wanna insert:",cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"\nEnter the no:",cin>>num;
		insert(num);
	}
	cout<<"\nAfter inserting:";
	print();
}
