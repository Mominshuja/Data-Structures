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
int find(int k)
{
	node *ktemp=head,*ptemp=head;
	for (int i=0;i<k-1;i++)
	{
		if (ptemp == NULL)
		{
			cout<<"k is greater than linked lists";
			return 0;
		}
		else
		{
			ptemp=ptemp->next;
		}
	}
	while (ptemp->next != NULL)
	{
		ktemp=ktemp->next;
		ptemp=ptemp->next;
		
	}
	cout<<endl<<ktemp->data;
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
	cout<<"Enter the number of node from the end ";
	cin>>k;
	nk=find(k);
	cout<<endl<<nk;
	return 0;
}
