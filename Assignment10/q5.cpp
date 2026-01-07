//Q5.WAP to print string in reverse order using stack.
#include<iostream>
#define MAX 20
using namespace std;
class Stack
{
	char data[MAX];
	int top;
	public:
		Stack()
		{
			top=-1;
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
		void push(char x)
		{
			if(full()) return;
			top++;
			data[top]=x;
		}
		char pop()
		{
			char x;
			if(empty()) return 0;
			else
			{
				x=data[top];
				top--;
				return x;
			}
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
	char str[20];
	Stack stk;
	cout<<"Enter the string you want to reverese :";
	cin.getline(str,20);
	int i=0;
	while(str[i]!='\0')
	{
		stk.push(str[i]);
		i++;
	}
	stk.show();
	cout<<"Reversed string is :";
	while(!stk.empty())
	{
		cout<<stk.pop();
	}	
	
}
