/*Create an DLL and implement following functions.
	-create()
	-recursive show()
	-recursive count()
	-recursive search()
	-recursive reverse_show()
	-recursive makeEmpty() - This function will delete all the nodes in the list.
	-recursive addatend()
	-recursive delatend()	
	*/

#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
class Node
{
	public:
		Node *prev;
		int data;
		Node *next;
		Node()
		{
			prev=NULL;
			data=0;
			next=NULL;
			
		}
		Node(int a)
		{
			prev=NULL;
			data=a;
			next=NULL;
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
		friend int main();
		int checkhead()
		{
			if(head==NULL)
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		void addatend(Node *p,int x)
		{
			Node *q;
			if(p->next==NULL)
			{
//				=new Node(x);
//				p->next=q;
//				q->prev=p;
				return;	
				
			}
			else
			{
				addatend(p->next,x);
				
			}
		}
		void create()
		{
			int n,x,i;
			cout<<"Enter Number of nodes you want "<<endl;
			cin>>n;
			if(n==0)
			{
				return;
			}
			cout<<"Enter data :";
			cin>>x;
			head=new Node(x);
			Node *p=head;
			for(i=0;i<n-1;i++)
			{
				cout<<"Enter data  :";
				cin>>x;
				p->next=new Node(x);
				p->next->prev=p;
				p=p->next;
			}
		}
		Node *gethead()
		{
			return head;
		}
		void show(Node *p)
		{
			if(p==NULL)
			{
				cout<<"\nempty list "<<endl;
				return;
			}
			cout<<p->data<<" ";
			show(p->next);
		}
		int count(Node *p)
		{
			if(p==NULL)
			{
				return 0;
			}
			int c;
			c=count(p->next);
			return c+1;
		}
		void reverse_show(Node *p)
		{
			if(p==NULL)
			{
				return;
			}
			else
			{
				reverse_show(p->next);
				cout<<p->data<<" ";
			}	
		}
		Node* makeEmpty(Node *p)
		{
			if(p==NULL)
			{
				return NULL;
			}
			else
			{
				p->next=makeEmpty(p->next);
				p->prev=NULL;
				delete p;
				return NULL;
				
			}
		}
		int search(Node *p,int x)
		{
			if(p==NULL)
			{
				return 0;
			}
			if(p->data==x)
			{
				return 1;
			}
			int res=search(p->next,x);
			return res;
		}
};
int main()
{
	DLL source;
	source.create();
	source.show(source.gethead());
	cout<<"\nNumber of nodes in the list is "<<source.count(source.gethead())<<endl;
	cout<<"Enter the number you want to search in list : "<<endl;
	int x;
	cin>>x;
	int c=source.search(source.gethead(),x);
	if(c==1)
	{
		cout<<"data found "<<endl;
	}
	else
	{
		cout<<"data not found "<<endl;
	}
	cout<<"List in reverse order :";
	source.reverse_show(source.gethead());
	source.head=source.makeEmpty(source.gethead());
	source.show(source.gethead());
//	source.create();
//	source.show(source.gethead());

		source.addatend(source.gethead(),20);
	
}
