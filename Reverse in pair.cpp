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
void Reversep(node *temp)
{
	int temp1;
	if(temp == NULL || temp->next == NULL)
		return;
	else
	{
		temp1=temp->data;
		temp->data=temp->next->data;
		temp->next->data=temp1;
		Reversep(temp->next->next);
	}
}
int main()
{
	int n,ele,k,nk;
	cout<<"Enter the number of nodes:"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the data element";
		cin>>ele;
		create(ele);
	}
	display();
	Reversep(head);
	cout<<endl<<"The Linked List reversed in pairs is:";
	display();
	return 0;
}
