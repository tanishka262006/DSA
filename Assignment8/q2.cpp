/*Q2.Create DLL with following functions with switch.
-show()
-search()
-count()
-addatbeg()
-addatend()
-delatend()
-delbypos()
-makeEmpty()*/
#include<iostream>
using namespace std;
class Node
{
	public:
		Node *prev;
		int data;
		Node *next;
		Node()
		{
			data=0;
			prev=NULL;
			next=NULL;
		}
		Node(int a)
		{
			data=a;
			next=NULL;
			prev=NULL;
		}
};
class DLL
{
	public:
	Node *head;
	DLL()
	{
		head=NULL;
	}
	void create()
	{
		int n,x,i;
		cout<<"Enter number of nodes you want "<<endl;
		cin>>n;
		if(n==0)
		{
			return;
		}
		else
		{
			cout<<"Enter data to be added at first node "<<endl;
			cin>>x;
			head=new Node(x);
			Node *p=head;
			for(i=0;i<n-1;i++)
			{
				cout<<"Enter data "<<endl;
				cin>>x;
				p->next=new Node(x);
				p->next->prev=p;
				p=p->next;
			}
		}
	}
	void show()
	{
		
		if(head==NULL)
		{
			cout<<"empty list "<<endl;
			return;
		}
		Node *p=head;
		while(p!=NULL)
		{
		
			
			cout<<"data is "<<p->data<<endl;
			p=p->next;
		}
		
	}
	int count()
	{
		if(head==NULL)
		{
			return 0;
		}
		
		else
		{
			int c=0;
			Node *p=head;
			while(p!=NULL)
			{
				c++;
				p=p->next;
			}
			return c;
		}
	}
	int search(int x)
	{
		if(head==NULL)
		{
			return 0;
		}
		Node *p=head;
		while(p!=NULL)
		{
			if(p->data==x)
			{
				return 1;
			}
			p=p->next;
		}
		
	}
	void addatbeg(int x)
	{
		Node *p=new Node(x);
		if(head==NULL)
		{
			head=p;
			
		}
		else
		{
			Node *q=head;
			p->next=q;
			q->prev=p;
			head=p;
		}
	}
	void addatend(int x)
	{
		Node *p=new Node(x);
		if(head==NULL)
		{
			head=p;
			return;
		}
		else
		{
			Node *q=head;
			while(q->next!=NULL)
			{
				q=q->next;
			}
			q->next=p;
			p->prev=q;
			
		}
		
	}
	void delatend()
	{
		if(head==NULL)
		{
			return;
		}
		else
		{
			Node *p=head;
			while(p->next!=NULL)
			{
				p=p->next;
			}
			Node *q=p->prev;
			q->next=NULL;
			delete p;
		}
	}
	void delbypos(int pos)
	{
		int c=count();
		if(pos<1 || pos>c)
		{
			cout<<"Invalid position "<<endl;
			return;
		}
//		else if(pos==1)
//		{
//			delatbeg();
//		}
		else if(pos==c)
		{
			delatend();
		}
		else
		{
			Node *p=head;
			for(int i=0;i<pos-1;i++)
			{
				p=p->next;
			}
			Node *q=p->prev;
			q->next=p->next;
			p->next->prev=q;
			delete p;
		}
	}
	void makeEmpty()
	{
		if(head==NULL)
		{
			cout<<"Empty list "<<endl;
			return;
		}
		else
		{
			Node *p=head;
			
			Node *q;
				while(p!=NULL)
				{
				
				delete p;
				p=q;
				}
				
				
			
			
			
		}
	}
};
int main()
{
	DLL source;
	source.create();
	source.show();
	source.addatbeg(20);
	cout<<"After add at beginning "<<endl;
	source.show();
	source.addatend(20);
	cout<<"After add at end data is "<<endl;
	source.show();
	cout<<"count of nodes is "<<source.count()<<endl;
	cout<<"Enter element you want to search "<<endl;
	int x;
	cin>>x;
	if(source.search(x))
	{
		cout<<"found "<<endl;
	}
	else
	{
		cout<<"not found "<<endl;
	}
	source.delatend();
	source.show();
	cout<<"Enter position where node to be deleted "<<endl;
	cin>>x;
	source.delbypos(x);
	source.show();
	source.makeEmpty();
	source.show();
	
	
}
