/*Create a doubly linked list(DLL) of integers.Implement following functions as member functions.
	(Revise independant function through notebook.Think about diagram)
	-create()
	-show()
	-addatbeg()
	-addatend() 
	-search()
	-count()
	-delatbeg()
	-delatend()
	-sort()
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
	void create()
		{
			char str[20];
			cin.getline(str,20);
			
			head=new Node(atoi(str));
			Node *p;
			p=head;
			while(strcmp(str,"STOP")!=0)
			{
				cout<<"Enter data :";
				cin.getline(str,20);
				p->next=new Node(atoi(str));
				p->next->prev=p;
				p=p->next;
				
				return;
			}
			
		}
		void createn()
		{
			int n,x,i;
			cout<<"Enter number of nodes you want "<<endl;
			cin>>n;
			if(n==0)
			{
				return;
			}
			cout<<"Enter data :";
			cin>>x;
			head=new Node(x);
			Node *p;
			p=head;
			for(i=0;i<n-1;i++)
			{
				cout<<"Enter data :";
				cin>>x;
				p->next=new Node(x);
				p=p->next;
			}
		}
		void show()
		{
			if(head==NULL)
			{
				return;
			}
			Node *p;
			p=head;
			while(p!=NULL)
			{
				cout<<"data is : "<<p->data<<endl;
				p=p->next;
			}
		}
		void addatbeg(int x)
		{
			Node *p=new Node(x);
			if(head==NULL)
			{
				head=p;
				return;
			}
			Node *q=head;
			p->next=head;
			head->prev=p;
			head=p;
		}
		void addatend(int x)
		{
			Node *p=new Node(x);
			if(head==NULL)
			{
				head=p;
				return;
			}
			Node *q=head;
			while(q->next!=NULL)
			{
				q=q->next;
			}
			q->next=p;
			p->prev=q;
			
		}
		bool search(int x)
		{
			if(head==NULL)
			{
				return 0;
			}
			else
			{
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
		void delatbeg()
		{
			if(head==NULL)
			{
				return;
			}
			else
			{
				Node *p=head;
				head=head->next;
				p->next=NULL;
				p->prev=NULL;
				delete p;
			}
		}
		void delatend()
		{
			if(head==NULL)
			{
				cout<<"Empty list "<<endl;
				return;
			}
			Node *p=head;
			while(p->next!=NULL)
			{
				p=p->next;
			}
			p->prev->next=NULL;
			p->prev=NULL;
			delete p;
		}
		void sort()
		{
			Node *p,*q;
			p=head;
			for(p=head;p->next!=NULL;p=p->next)
			{
				for(q=p->next;q!=NULL;q=q->next)
				{
					if(p->data>q->data)
					{
						int temp;
						temp=p->data;
						p->data=q->data;
						q->data=temp;
						
					}
				}
			}
		}
};
int main()
{
	DLL source;
	source.createn();
	source.show();
	int x;
	cout<<"Enter data to be added at beginning :";
	cin>>x;
	source.addatend(x);
	source.addatbeg(x);
	source.show();
	cout<<"Enter data to be added at end :";
	cin>>x;
	source.addatend(x);
	cout<<"After add at end "<<endl;
	source.show();
	cout<<"Enter data to search :";
	cin>>x;
	x=source.search(x);
	if(x==1)
	{
		cout<<"data found "<<endl;
	}
	else
	{
		cout<<"not found "<<endl;
	}
	cout<<"Number of nodes in the list is :"<<source.count()<<endl;
	source.delatbeg();
	cout<<"After delete at beginning "<<endl;
	source.show();
	
	source.delatend();
	cout<<"After delete at end "<<endl;
	source.show();
	source.sort();
	cout<<"After sorting "<<endl;
	source.show();
	
	
}
