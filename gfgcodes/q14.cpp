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
		Node *nNode(Node *p,int n)
		{
			if(p==NULL || n<0)
			{
				return NULL;
			}
			Node *slow,*fast;
			slow=p;
			fast=p;
			for(int i=1; i < n ;i++)
			{
				fast=fast->next;
			}
			while(fast!=NULL && fast->next!=NULL)
			{
				fast=fast->next;
				slow=slow->next;
			}
			return slow;
			
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
			source.show();
	int n;
	cout<<"\nenter number for getting end of list :";
	cin>>n;
	//source.show();
	//cout<<"hello";
	Node *temp=source.nNode(source.head,n);
	cout<<temp->data;
	source.show();
}
