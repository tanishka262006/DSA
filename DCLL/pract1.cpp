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
			prev=NULL;
			next=NULL;
			data=0;
		}
		Node(int a)
		{
			prev=NULL;
			next=NULL;
			data=a;
		}
};
class DCLL
{
	Node *rear;
	Node *front;
	public:
		DCLL()
		{
			rear=NULL;
			front=NULL;
		}
		int empty()
		{
			if(front==NULL)
			{
				return 1;
			}
			return 0;
		}
		void addatbeg(int x)
		{
			Node *p=new Node(x);
			if(empty())
			{
				
				front=p;
				rear=p;
				rear->next=front;
				p->prev=front;
			}
			else 
			{
				p->next=front;
				p->next->prev=p;
				p->prev=rear;
				rear->next=p;
				front=p;
					
			}
			
		}
		void show()
		{
			if(empty())
			{
				return;
			}
			Node *p=front;
			do
			{
				cout<<"data is :"<<p->data<<" "<<endl;
				p=p->next;
			}
			while(p!=front);
		}
		void addatend(int x)
		{
			Node *p=new Node(x);
			if(empty())
			{
				front=p;
				rear=p;
				rear->next=front;
				p->prev=front;
			}
			else
			{
				Node *q=front;
				while(q->next!=NULL)
				{
					
				}
			}
		}
};

int main()
{
	DCLL source;
	source.addatbeg(20);
	source.addatbeg(10);
	source.addatbeg(30);
	source.addatbeg(40);
	source.show();
	
}
