//Q3.WAP to implement stack using array.Check full empty conditions.
#include<iostream>
#define MAX 4
using namespace std;
class Stack
{
	int data[MAX];
	int top;
	public:
		Stack()
		{
			top=-1;
		}
		void push(int x)
		{
			if(full())
			{
				cout<<"can't push value "<<endl;
				return;
			}
			top++;
			data[top]=x;
		}
		int full()
		{
			if(top==MAX-1)
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
			else
			{
				return 0;
			}
		}
		int pop() 
		{
	        if(empty()) 
			{
	            cout << "Stack underflow\n";
	            return -1;
	        }
	        return data[top--];
    	}
		void show()
		{
			if(empty())
			{
				cout<<"stack is empty "<<endl;
				return;
			}
			for(int i=0;i<=top;i++)
			{
				cout<<"data is "<<data[i]<<endl;
			}
		}
};
int main()
{
	Stack stk,stk2;
	stk.push(20);
	stk.push(10);
	stk.push(30);
	stk.push(40);
	stk.push(40);
	stk.push(40);
	stk.show();
	while(!stk.empty())
	{
		stk2.push(stk.pop());
	}
	cout<<"reversed linked list is :";
	stk2.show();
}
