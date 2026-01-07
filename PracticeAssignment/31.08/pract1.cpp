#include<iostream>
#include<string.h>
#include<stdlib.h>
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
		Node* create();
		friend int main();
		void show(Node *p);
		Node *getfront()
		{
			return front;
		}
};
void CLL::show(Node *p)
{
	if(p==rear)
	{
		cout<<"data is "<<p->data<<endl;
		return;
	}
	else
	{
		cout<<"data is "<<p->data<<endl;
		show(p->next);
		
	}
}
Node *CLL::create()
{
	char str[20];
	cout<<"Enter data :";
	cin>>str;
	
	if(strcmp(str,"STOP")==0)
	{
		return NULL;
	}
	else
	{
		
		Node *p=new Node(atoi(str));
		
		p->next=create();
		if(p->next==NULL)
		{
			rear=p;
		}
		return p;
	
	}
}
int main()
{
	CLL source;
	source.front=source.create();
	source.show(source.getfront());
}
