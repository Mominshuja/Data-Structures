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
void Reverse()
{
	node *temp1=head,*temp2=NULL,*prev=NULL;
	while(temp1!=NULL)
	{
		temp2=temp1->next;
		temp1->next=prev;
		prev=temp1;
		temp1=temp2;
	}
	head =prev;
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
	Reverse();
	cout<<endl<<"The Reverse of Given Linked Lists is:"<<endl;
	display();
	return 0;
}
