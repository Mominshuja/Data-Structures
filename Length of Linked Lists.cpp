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
void display()
{
	node *temp=head;
	while(temp !=NULL)
	{
		cout<<endl<<temp->data;
		temp=temp->next;
	}
}
void length()
{
	node *temp=head;
	int k=0;
	while(temp!=NULL)
	{
		k++;
		temp=temp->next;
	}
	if(k%2==0)
		cout<<"The Length of Linked Lists is Even";
	else
		cout<<"The Length of Linked List is odd";
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
	length();
}
