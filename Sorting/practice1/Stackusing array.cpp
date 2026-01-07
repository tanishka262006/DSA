#include<iostream>
#include<stdlib.h>
#define MAX 5
#include<time.h>
using namespace std;
class Stack
{
	public:
	int top;
	int num[MAX];
	Stack()
	{
		top=-1;
	}
	int full()
	{
		if(top==MAX)
		{
			return 1;
		}
		return 0;
	}
	int empty()
	{
		if(top==-1)
		{
			return 1;
		}
		return 0;
	}
	int pop()
	{
		if(empty())
		{
			cout<<"can't pop :";
			
		}
		else
		{
			int x=num[top];
			top--;
		}
	}
	void push(int x)
	{
		if(full())
		{
			cout<<"Stack is full ";
		}
		else
		{
			top++;
			num[top]=x;
		}
	}
	void print()
	{
		if(empty())
		{
			cout<<"\nempty stack :";
			return;
		}
		int x=top;
		
		while(x!=-1)
		{
			cout<<"data is at "<<x<<" is "<<num[x]<<" "<<endl;
			x--;
		}
	}
};
int main()
{
	Stack stk;
	srand(time(NULL));
	for(int i=0;i<MAX;i++)
	{
		stk.push(rand()%100);
	}
	//stk.push(20);
	stk.print();
	cout<<endl;
	for(int i=0;i<3;i++)
	{
		stk.pop();
	}
	stk.print();
	
}

