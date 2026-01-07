//Q4.WAP to implement stack using linked list.Print all elements of stack.
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
	Stack stk;
	stk.push(20);
	stk.push(30);
	stk.push(0);
	stk.show();
	stk.push(10);
	stk.push(50);
	stk.show();
	stk.pop();
	stk.pop();
	stk.pop();
	stk.pop();
	stk.show();
	stk.pop();
	stk.pop();
	cout<<"after all pop statements :";
	stk.show();
	
}
