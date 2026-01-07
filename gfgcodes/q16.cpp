#include<iostream>
#define MAX 5
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
		Node()
		{
			data=0;
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
		void remdup()
		{
			if(head==NULL)
			{
				return;
			}
			//int *freq=new int[4];
			//int c=0;
			//freq[0]=0;
			if(head->next==NULL)
			{
				return;
			}
			Node *q=head->next;
			Node *p=head;
			while(q!=NULL && q->next!=NULL)
			{
				if(p->data==q->data)
				{
					p->next=q->next;
					Node *temp=q;
					q=q->next;
					
					delete temp;
				}
				else
				{
					q=q->next;
				}
				
				
			}
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
				cout<<"data is :"<<p->data<<" ";
				p=p->next;
			}
		}
};
int main()
{

	SLL source;
	source.addatend(2);
	source.addatend(2);
	source.addatend(2);
	source.addatend(4);
	source.addatend(2);
	source.addatend(7);
	source.remdup();
	source.show();
}
