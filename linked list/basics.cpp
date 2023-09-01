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
	Node* temp=new Node();
	temp->data=x;
	temp->next=head;
	head=temp;
}
void print()
{
	struct Node* temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<endl;
}
void insert_end(int x){
	Node* temp=head;
	Node* newnode=new Node();
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next=newnode;
	newnode->data = x;
	newnode->next = NULL;
}
void insert_mid(int pos,int val){
	Node* newnode=new Node();
	Node* curr=head;
	while(curr->data != pos){
		curr = curr->next;
	}
	Node *temp = curr->next;
	curr->next = newnode;
	newnode->data = val;
	newnode->next = temp;
}
void delete_num(int input){
	int found=1;
	Node *temp = head;
	Node *prev;
	if(temp->data == input){
		head = temp->next;
		free(temp);
		return;
	}
	while(temp!= NULL && found){
		if(temp->data == input){
			found =0;
			prev->next = temp->next;
			free(temp);
		}else{
		prev = temp;
		temp = temp->next;
	}
	}
}
int main()
{
	int n,num,end,mid,del;
	cout<<"Enter how many no u wanna insert at start:",cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"\nEnter the no:",cin>>num;
		insert(num);
	}
	cout<<"\nAfter inserting:";
	print();
	cout<<"\n Enter elements to be inserted at end:",cin>>end;
	while(end--){
		cout<<"\nEnter the no:",cin>>num;
		insert_end(num);
	}
	print();
	cout<<"\n Enter after which element you want to insert:",cin>>mid;
	cout<<"\nEnter the no:",cin>>num;
	insert_mid(mid,num);
	print();
	cout<<"\nEnter the value you want to delete:",cin>>del;
	delete_num(del);
	print();
}
