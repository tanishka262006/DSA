//WAP to implement Queue using SLL.
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
		Node()
		{
			data=0;
			next=NULL;
		}
};
class Queue
{
	Node *front;
	Node *rear;
	public:
		Queue()
		{
			front=NULL;
			rear=NULL;
		}
		int empty()
		{
			if(front==NULL)
			{
		 		return 1;
			}
			return 0;
		}
		void enqueue(int x)
		{
			Node *p=new Node(x);
			if(empty())
			{
				front=p;
				rear=front;
			}
			rear->next=p;
			rear=p;
		
		}
		int dequeue()
		{
			if(empty())
			{
				cout<<"empty queue "<<endl;
				return 0;
			}
			else 
			{
				int x=front->data;
				if(front->next==NULL)
				{
					
					front=NULL;
					rear=NULL;
					delete front;
					delete rear;
					
					
				}
				else
				{
					Node *p=front;
					front=front->next;
					delete p;
				}
				return x;
			}
		}
		void show()
		{
			Node *p=front;
			while(p!=NULL)
			{
				cout<<"data is :"<<p->data<<endl;
				p=p->next;
			}
		}
};
int main()
{
	Queue que;
	que.dequeue();
	que.enqueue(20);
	que.enqueue(10);
	que.enqueue(40);
	que.enqueue(50);
	que.dequeue();
	que.enqueue(70);
	que.show();
	
}
