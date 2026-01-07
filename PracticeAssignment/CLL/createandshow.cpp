#include<iostream>
using namespace std;
class Node
{
	public:
		int data;
		Node *next;
		Node()
		{
			data=0;
			next=NULL;
		}
		Node(int a)
		{
			data=a;
			next=NULL;
		}
};
class CLL
{
	Node *front;
	Node *rear;
	public:
		CLL()
		{
			front=NULL;
			rear=NULL;
		}
		
		void create();
		void show();
};
void CLL::create()
{
	int n,x,i;
	cout<<"Enter no. of nodes you want "<<endl;
	cin>>n;
	if(n==0)
	{
		return;
	}
	else
	{
		cout<<"Enter data for first node "<<endl;
		cin>>x;
		front=new Node(x);
		rear=front;
		rear->next=front;
		Node *p=front;
		for(i=1;i<=n-1;i++)
		{
			cout<<"Enter data "<<endl;
			cin>>x;
			p->next=new Node(x);
			p=p->next;
		}
		rear=p;
		rear->next=front;
	}
	
}
void CLL::show()
{
	if(front==NULL)
	{
		return;
	}
	Node *p=front;
	do
	{
		cout<<"data is "<<p->data<<endl;
		p=p->next;
	}
	while(p!=front);
}
int main()
{
	CLL source;
	source.create();
	source.show();
}
