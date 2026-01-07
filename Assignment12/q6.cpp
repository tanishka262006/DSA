#include<iostream>
#define MAX 10
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
				return;
			}
			top++;
			data[top]=x;
		}
		T pop()
		{
			T x;
			if(empty())
			{
				return 0;
			}
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
			else
			{
				return 0;
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
};
int priority(char s)
{
	if(s=='*' ||	s=='/')
	{
		return 2;
	}
	else if(s=='+' || s=='-')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void infixtopostfix(char *infix,char *postfix)
{
	int i=0;
	int j=0;
	Stack<char> stk;
	char stkop,expop;
	while(infix[i]!='\0')
	{
		
		expop=infix[i];
		if(expop=='+' || expop=='-' || expop=='*' || expop=='/')
		{
			
			while(!stk.empty())
			{
				stkop=stk.pop();
				if(priority(stkop)>=priority(expop))
				{
					postfix[j]=stkop;
					j++;
				}
				else
				{
					stk.push(stkop);
					break;
				}	
			}
			stk.push(expop);
		}
		else if(expop>='0' && expop<='9')
		{
			postfix[j]=expop;
			j++;
			
		}
		i++;
	}
	
	
	while(!stk.empty())
	{
		postfix[j]=stk.pop();
		j++;
	}
	postfix[j]='\0';
	
}

int main()
{
	char infix[30];
	char postfix[30];
	cout<<"Enter infix expression :";
	cin.getline(infix,30);
	infixtopostfix(infix,postfix);
	cout<<"postfix expression is :"<<postfix<<endl;
	

}
