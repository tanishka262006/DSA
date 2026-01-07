/*.Scan an infix expression from user.Convert it into postfix and evaluate that postfix.
Condition = Operands are of single digit.Use only 4 operators( + , - , /  , * ).
Define your own class Stack.
*/
#include<iostream>
#define MAX 100
using namespace std;
template <typename T>
class Stack {
    T data[MAX];
    int top;
public:
    Stack() 
	{ 	
		top = -1; 
	}

    bool empty() 
	{ 
		return top == -1; 
	}
    bool full() 
	{ 
		return top == MAX - 1; 
	}

    void push(T x) 
	{
        if(full()) 
		{
            cout << "Stack overflow\n";
        } 
		else 
		{
			top++;
            data[top] = x;
        }
    }

    T pop() 
	{
        if(empty()) 
		{
            cout << "Stack underflow\n";
            return -1;
        }
        return data[top--];
    }
};
int priority(char s)
{
	if(s=='*' || s=='/')
	{
		return 2;
	}
	if(s=='+' || s=='-')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int evaluate(char *postfix)
{
	Stack<int> stk;
	int pop1,pop2;
	int i=0;
	int res;
	while(postfix[i]!='\0')
	{
		if(postfix[i]>='0' && postfix[i]<='9')
		{
			stk.push(postfix[i]-'0');
			i++;
		}
		else
		{
			pop1=stk.pop();
			pop2=stk.pop();
			
			switch(postfix[i])
			{
				case '+':
					res=pop1+pop2;
					break;
				case '-':
					res=pop2-pop1;
					break;
				case '*':
					res=pop1*pop2;
					break;
				case '/':
					res=pop2/pop1;
					break;	
					
			}
			i++;
			stk.push(res);
			
		}
		
	}
	cout<<endl;
	return stk.pop();
}
void infixtopostfix(char *infix,char *postfix)
{
	Stack<char> stk;
	int i=0;
	int j=0;
	while(infix[i]!='\0')
	{
		char expop=infix[i];
		char stkop;
		
		if(infix[i]=='+' || infix[i]=='-' || infix[i]=='*' || infix[i]=='/')
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
		else
		{
			if(expop>='0' && expop <='9')
			{
				postfix[j]=infix[i];
				j++;
			}
		}
		
        i++;
    }
    while(!stk.empty()) 
	{
        postfix[j] = stk.pop();
        j++;
    }

    postfix[j] = '\0';
}
int main()
{
	char infix[20];
	char postfix[20];
	cout<<"Enter an infix expression :";
	cin.getline(infix,20);
	
	infixtopostfix(infix,postfix);
	cout<<"postfix expression is :"<<postfix;
	cout<<"result is "<<evaluate(postfix)<<endl;
}

