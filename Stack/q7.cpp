//.Define a templatized class Stack to work with any datatype.
/*Create a stack of integers,fraction values and strings.
Print all elements of stack.*/
#include<iostream>
#define MAX 4
using namespace std;
template<typename T>
class Stack
{
	T data[MAX];
	int top;
	public:
		Stack()
		{
			top=-1;
		}
		void push(T x)
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
		T pop()
		{
			T x;
			if(empty()) 
			{
				return 0;
			}
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
	Stack<int > stkint;
	Stack <char> stkch;
	Stack<float> stkfl;
	stkint.push(10);
	stkint.push(1);
	stkint.push(20);
	stkint.push(30);
	stkint.push(40);
	stkint.show();
	stkch.push('a');
	stkch.push('b');
	stkch.push('c');
	stkch.push('d');
	stkch.show();
}

