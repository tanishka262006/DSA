#include<stdlib.h>
#include<string.h>
#include<iostream>
using namespace std;
class Node
{
	public:
		Node*next;
		int data;
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
		~Node()
		{
			
		}
};
class CLL
{
	private:
		Node* front;
		Node* rear;
		public:
			CLL()
			{
				front=NULL;
				rear=NULL;
			}
		Node * create();
		void show(Node *p);
		friend int main();
		int count(Node *p);
		int search(int x);
		Node *getfront()
		{
			return front;
		}
	
};
Node *CLL :: create()
{
	char str[30];
	cout<<"Enter the string (use STOP to stop)"<<endl;
	cin>>str;
	if(strcmp(str,"STOP")==0)
	{
		return NULL;
	}
	Node *p=new Node(atoi(str));
	p->next=create();
	if(p->next == NULL)
	{
		rear =p ;
	}
	return p;
}
			
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
int CLL:: count(Node *p)
{
	if(p==rear)
	{
		return 1;
	}
	else
	{	
		int c;
		c=count(p->next);
		c=c+1;
		return c;
	}
}
int main()
{
	CLL source;
	source.front=source.create();
	source.show(source.getfront());
	int c=source.count(source.getfront());
	cout<<"Count of node in the list is "<<c;
	
}
