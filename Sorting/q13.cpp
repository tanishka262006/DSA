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
		void addatend(int a)
		{
			Node *p=new Node(a);
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
		void show()
		{
			if(head==NULL)
			{
				return;
			}
			else
			{
				Node *q=head;
				while(q!=NULL)
				{
					cout<<"data is :"<<q->data<<" ";
					q=q->next;
				}
			
			}
		}
		Node *rotate(int k,Node *p)
		{
			if(k<0 && p==NULL)
			{
				return NULL;
			}
			Node *q=p;
			Node *temp=p;
			for(int i=1;i<k;i++)
			{
				q=q->next;
			}
			p=q;
			Node *temp1=q;
			while(q->next!=NULL)
			{
				q=q->next;
			}
			q->next=temp;
			temp=temp1->next;
			p->next=NULL;
			return temp;
		}
		Node *rotatelist(int k,Node *p)
		{
			if(k<0 || p==NULL)
			{
				return NULL;
			}
			
			Node *rear=p;
			Node *q=p;
			while(rear->next!=NULL)
			{
				rear=rear->next;
			}
			while(k>0)
			{
				//addatend(q->data);
				rear->next=p;
				p=p->next;
				rear=rear->next;
				rear->next=NULL;
				k--;
			}
			return p;
		}
		friend int main();
};
int main()
{
	SLL source;
	
		source.addatend(2);
		source.addatend(4);
		source.addatend(7);
		source.addatend(8);
		source.addatend(9);
		
	int k;
	cout<<"enter number for rotate :";
	cin>>k;
	cout<<"hello";
	source.head=source.rotatelist(k,source.head);
	source.show();
	
}
