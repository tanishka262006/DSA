#include<iostream>
using namespace std;
class Node
{
	public:
		int data;
		Node *next;
		Node *prev;
		Node()
		{
			data=0;
			next=NULL;
			prev=NULL;
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
	Node *head;
	public:
		DLL()
		{
			head=NULL;
		}
		void show()
		{
			if(head==NULL)
			{
				return;
			}
			Node *p=head;
			while(p!=NULL)
			{
				cout<<p->data<<" ";
				p=p->next;	
			}
		}
		void create()
		{
			char str[17];
			cout<<"Enter a binary :";
			cin.getline(str,17);
			int i=0;
			while(str[i]!='\0')
			{
				if(str[i]=='0')
				{
					addatend(0);
				}
				if(str[i]=='1')
				{
					addatend(1);
				}
				i++;
			}
			
		}
		void addatend(int value)
		{
			Node *p=new Node(value);
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
				p->prev=q;
			}
		}
		int add(DLL s1,DLL s2)
		{
			Node *p,*q;
			p=s1.head;
			q=s2.head;
			int carry=0;
			while(p->next!=NULL)
			{
				p=p->next;
				
			}
			while(q->next!=NULL)
			{
				q=q->next;
			}
			while(p!=NULL && q!=NULL)
			{
				if(p->data+q->data+carry==1)
				{
					addatbeg(1);
					carry=0;	
				}
				else if(p->data+q->data+carry==2)
				{
					addatbeg(0);
					carry=1;	
				}
				else if(p->data+q->data+carry==3)
				{
					addatbeg(1);
					carry=1;	
				}
				else
				{
					addatbeg(0);
					carry=0;
				}
				p=p->prev;
				q=q->prev;
			}
			
		}
		void addatbeg(int x)
		{
			Node *q=new Node(x);
			if(head==NULL)
			{
				head=q;
			}
			else
			{
				q->next=head;
				head->prev=q;
				head=q;
			}
		}
};
int main()
{
	DLL source1,source2,addbin;
	source1.create();
	source2.create();
	source1.show();
	cout<<" "<<endl;
	source2.show();
	cout<<endl;
	addbin.add(source1,source2);
	addbin.show();
	
}
