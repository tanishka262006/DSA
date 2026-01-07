#include<iostream>
using namespace std;
class Node
{
	public:
		int data;
		Node *prev;
		Node *next;
	Node()
	{
		next=NULL;
		prev=NULL;
		data=0;
	}
	Node(int a)
	{
		next=NULL;
		prev=NULL;
		data=a;
	}
};
class DLL
{
	Node *head;
	public:
	DLL()
	{
		head=NULL;
	}
	void delatpos(int pos)
	{
		if(head==NULL)
		{
			return;
		}
		int c=count();
		if(pos <= 0 || pos > c)
		{
			return;
		}
		else
		{
			if(pos==1)
			{
				Node *p=head;
				head=head->next;
				delete p;
			}
			else if(pos >1 && pos<=c)
			{
				Node *p=head;
				Node *q;
				for(int i=1;i<pos;i++)
				{
					q=p;
					p=p->next;
				}
				q->next=p->next;
				delete p;
				
			}
			
		}
		
	}
	int count()
	{
		if(head==NULL)
		{
			retun 0;
		}
		Node *p=head;
		int c=0;
		while(p!=NULL)
		{
			c++;
			p=p->next;
		}
		return c;
	}
	void create()
	{
		
	}
};
int main()
{
	DLL list;
	list.create();
	list.count();
	list.delatpos(3);
}
