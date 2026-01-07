//Create an SLL.Print elements of SLL in reverse order using stack(Implement stack using Linked list).
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

class Stack
{
	Node *top;
	public:
		Stack()
		{
			top=NULL;
		}
		int empty()
		{
			if(top==NULL)
			{
				return 1;
			}
			return 0;
		}
		void push(int x)
		{
			Node *p=new Node(x);
			if(empty())
			{
				top=p;
			}
			else
			{
				p->next=top;
				top=p;
			}
		}
		int pop()
		{
			if(empty())
			{
				cout<<"can't pop (empty stck) "<<endl;
				return 0;
			}
			else
			{ 
				Node *p=top;
				int x=p->data;
				top=top->next;
				delete p;
				return x;
			}
		}
		void show()
		{
			if(empty())
			{
				cout<<"empty stack ";
				return ;
			}
			Node *p=top;
			while(p!=NULL)
			{
				cout<<"data is :"<<p->data<<endl;
				p=p->next;
			}
		}
};
int main()
{
	Stack stk,stk2;
	stk.push(20);
	stk.push(30);
	stk.push(0);
	
	stk.push(10);
	stk.push(50);
	stk.show();
	while(!stk.empty())
	{
		stk2.push(stk.pop());
	}
	cout<<"reversed linked list is :"<<endl;
	stk2.show();
	
	
}
