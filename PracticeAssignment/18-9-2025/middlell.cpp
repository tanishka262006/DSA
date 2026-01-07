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
class SLL
{
	Node *head;
	public:
		SLL()
		{
			head=NULL;
		}
		void create();
		void addatend(int x);
		void show();
		int getMiddle(Node *p);
		Node *gethead()
		{
			return head;
		}
};
int SLL::getMiddle(Node *p)
{
	if(p==NULL)
	{
		return -1;
	}
	else
	{
		Node *slow=p;
		Node *fast=p;
		while(fast!=NULL && fast->next!=NULL)
		{
			slow=slow->next;
			fast=fast->next->next;
		}
		return slow->data;
	}
}
void SLL::create()
{
	int x;
	cout<<"keep entering data :";
	while(1)
	{
		cin>>x;
		if(x==0)
		{
			break;
		}
		addatend(x);
	}
	
}
void SLL::show()
{
	Node *p=head;
	if(head==NULL)
	{
		return;
	}
	while(p!=NULL)
	{
		cout<<"data is "<<p->data<<endl;
		p=p->next;
	}
}
void SLL::addatend(int x)
{
	Node *p=new Node(x);
	if(head==NULL)
	{
		head=p;
	}
	else
	{
		Node *q=head;
		while(q->next!=NULL)
		{
			q=q->next;
		}
		q->next=p;
	}
}
int main()
{
	SLL source;
	source.create();
	source.show();
	int x=source.getMiddle(source.gethead());
	cout<<x;
}
