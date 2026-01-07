#include<iostream>
using namespace std;
class Node
{
	public:
		int data;
		Node *next;
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
		void show()
		{
			Node *p=head;
			if(p==NULL)
			{
				return;
			}
			while(p!=NULL)
			{
				cout<<"data is "<<p->data<<" ";
				p=p->next;
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
			Node *q=head;
			while(q->next!=NULL)
			{
				q=q->next;
			}
			q->next=p;
		}
		Node* del(int n,int m)
		{
			if(n < 0 && m < 0)
			{
				return head;
			}
			
			if(head==NULL)
			{
				return head;
			}
			else
			{
				Node *p=head;
				while(p!=NULL)
				{
					Node *temp;
					for(int i=1;i<=m;i++)
					{
						temp=p;
						p=p->next;
					}
					Node *temp2;
					for(int i=1;i<=n;i++)
					{
						temp2=p;
						p=p->next;
						Node *q=p;
						temp2->next=p->next;
						delete q;
					}
				}
			}
		}
		friend int main();
};
int main()
{
	SLL source;
	for(int i=1;i<8;i++)
	{
		source.addatend(i*10);
	}
	source.show();
	source.head=source.del(1,4);
	source.show();
}
