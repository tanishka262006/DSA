//Scan a number from user.Print its 16 bit binary using stack.
//Define your own class Stack.
#include<iostream>
#define MAX 20
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
				return;
			}
			top++;
			data[top]=x;
		}
		int pop()
		{
			if(empty())
			{
				return 0;
			}
			int x;
			x=data[top];
			top--;
			return x;
			
		}
		int empty()
		{
			if(top==-1)
			{
				return 1;
			}
			return 0;
		}
		int full()
		{
			if(top==MAX-1)
			{
				return 1;
			}
			return 0;
		}
};

int main()
{
	int n,rem;
	cout<<"Enter number :";
	cin>>n;
	Stack stk;
	int i=0;
	while(i<=16)
	{
		rem=n%2;
		n=n/2;
		stk.push(rem);
		i++;
	}
	while(!stk.empty())
	{
		cout<<stk.pop()<<" ";
	}
}

