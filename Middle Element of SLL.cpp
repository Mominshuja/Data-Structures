#include<iostream>
using namespace std;
class node
{
	public:
		int data;
		node  *next;
};
node *head=NULL;
void create(int ele)
{
	node *temp;
	temp=head;
	if (head == NULL)
	{
		head= new node();
		head->data=ele;
		head->next=NULL;
	}
	else 
	{
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=new node();
		temp->next->data=ele;
		temp->next->next=NULL;
	}
}
void middle()
{
	node *temp1=head,*temp2=head,*prev;
	if (head == NULL)
	{
		cout<<"List is Empty";
	}
	else
	{
		while(temp2 != NULL && temp2->next != NULL)
		{
			temp2=temp2->next->next;
			prev=temp1;
			temp1=temp1->next;
		}
		if(temp2 != NULL)
			cout<<"The middle element is: "<<temp1->data;
		else
			cout<<"The Middle Elements are: "<<prev->data<<", "<<temp1->data;
	}
}
void display()
{
	node *temp=head;
	while(temp !=NULL)
	{
		cout<<endl<<temp->data;
		temp=temp->next;
	}
}

int main()
{
	int n,ele;
	cout<<"Enter the number of nodes:"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the data element";
		cin>>ele;
		create(ele);
	}
	display();
	middle();
}
