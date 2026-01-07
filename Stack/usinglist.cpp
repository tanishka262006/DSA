#include<iostream>
using namespace std;
class Node
{
	public:
		int data;
		Node *next;
		Node()
		{
			next=NULL;
			data=0;
		}
		Node(int a)
		{
			next=NULL;
			data=a;
		}
		~Node()
		{
			delete next;
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
			p->next=top;
			top=p;	
		}
		int pop()
		{
			if(empty()==1)
			{
				cout<<"stack is empty "<<endl;
				return -1;
			}
			Node *p=top;
			int x=p->data;
			top=top->next;
			//p->next=NULL;
			delete p;
			return x;
			
		}
};
int main()
{
	Stack stk;
	stk.push(20);
	stk.push(2);
	stk.push(4);
	stk.push(7);
	int val=stk.pop();
	cout<<"popped value is "<<val<<endl;
	val=stk.pop();
	cout<<"popped value is "<<val<<endl;
	val=stk.pop();
	cout<<"popped value is "<<val<<endl;
	val=stk.pop();
	cout<<"popped value is "<<val<<endl;
	val=stk.pop();
	cout<<"popped value is "<<val<<endl;
}
