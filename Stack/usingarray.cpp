#include<iostream>
#define MAX 5
using namespace std;
class Stack
{
	private:
		int data[MAX];
		int top;
	public:
		Stack()
		{
			top=-1;
		}
		void push(int x)
		{
			if(full()==0)
			{
				top++;
				data[top]=x;
				
			}
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
			return 0;
		}
		int pop()
		{
			int x;
			if(empty()==0)
			{
				x=data[top];
				top--;
				return x;
			}	
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
}

