#include<iostream>
#define MAX 20
using namespace std;
template<class T>
class Stack
{
	private:
		T data[MAX];
		int top;
		public:
			Stack()
			{
				top = -1;
			}
			bool full()
			{
				if(top == MAX -1 )
				{
					return true;
				}
				return false;
			}
			bool empty()
			{
				if(top == -1)
				{
					return true;
				}
				return false;
			}
			void push(T x)
			{
				if(full())
				{
					cout<<"The stack is full"<<endl;
					return;
				}
				top++;
				data[top] = x;
			}
			T pop()
			{
				if(empty())
				{
					cout<<"The stack is empty"<<endl;
					return (T)0;
				}
				T x = data[top];
				top--;
				return x;
			}
};
int priority(char ch)
{
	if(ch == '+' ||ch == '-')
	{
		return 1;
	}
	if(ch == '*'|| ch== '/')
	{
		return 2;
	}
	return 0;
}
void convert(char infix[30],char postfix[30])
{
	char expop,stkop;
	Stack<char> stk;
	int i,j;
	i=0;
	j=0;
	while(infix[i]!='\0')
	{
		expop = infix[i];
		if(expop == '+' || expop == '-' || expop == '*' || expop == '/')
		{
			while(!stk.empty())
			{
				stkop = stk.pop();
				if(priority(stkop) >= priority(expop))
				{
					postfix[j] = stkop;
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
		else
		{
			postfix[j] = expop;
			j++;
		}
		i++;
	}
	while(stk.empty() == 0)
	{
		postfix[j] = stk.pop();
		j++;
	}
	postfix[j] = '\0';
}
int evaluate(char*postfix)
{
	int pop1;
	int pop2;
	int i = 0;
	Stack<int> stk;
	while(postfix[i]!='\0')
	{
		if(postfix[i] >='0' && postfix[i]<='9')
		{
			stk.push(postfix[i] - 48);
		}
		else
		{
			pop1 = stk.pop();
			pop2 = stk.pop();
			switch(postfix[i])
			{
				case '+' : stk.push(pop2 + pop1);
				break;
				case '-' : stk.push(pop2 - pop1);
				break;
				case '*' : stk.push(pop2 * pop1);
				break;
				case '/' : stk.push(pop2 / pop1);
				break;
			}
		}
		i++;
	}
	if(stk.empty())
	{
		cout<<"Wrong evaluation"<<endl;
		return 0;
	}
	int ans = stk.pop();
	if(!stk.empty())
	{
		cout<<"Wrong evaluation"<<endl;
		return 0;
	}
	return ans;
}
int main()
{
	char infix[30];
	char postfix[30];
	cout<<"Enter the infix expression"<<endl;
	cin.getline(infix,30);
	convert(infix,&postfix[0]);
	cout<<"The postfix expression is:"<<endl;
	cout<<postfix<<endl;
	int ans = evaluate(postfix);
	cout<<"The answer of the expression is: "<<ans<<endl;
	return 0;
	
	
}
