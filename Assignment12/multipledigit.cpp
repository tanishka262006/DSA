#include <iostream>
#include <string.h>
#include <stdlib.h>
#define MAX 30
using namespace std;

template <class T>
class Stack
{
	T data[MAX];
	int top;
	public:
		Stack()
		{
			top = -1;
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
		void push(T x)
		{
			if(full())
			{
				cout<<"Stack full";
				return ;
			}
			top++;
			data[top] = x;
		}
		T pop()
		{
			if(empty())
			{
				cout<<"Stack empty";
				return (T)0;
			}
			T x = data[top];
			top--;
			return x;
		}
};
int priority(char ch)
{
	switch(ch)
	{
		case '+':return 1;
		case '-':return 1;
		case '*':return 2;
		case '/':return 2;
	}
}
class Term
{
	public:
	union OperatorOperand
	{
		int oprnd;
		char oprtr;
	};
	OperatorOperand opr;
	int flag;
	Term()
	{
		flag = -1;
	}
	Term(int opr)
	{
		this->opr.oprnd = opr;
		flag = 2;
	}
	Term(char opr)
	{
		this->opr.oprtr = opr;
		flag = 1;
	}
};
class PolishNode
{
	public:
		Term term;
		PolishNode *next;
		PolishNode()
		{
			next = NULL;
		}
		PolishNode(Term t)
		{
			term = t;
			next = NULL;
		}
};
class PolishSLL
{
	PolishNode *head;
	public:
		PolishSLL()
		{
			head = NULL;
		}
		void addatend(Term t)
		{
			PolishNode *p = new PolishNode(t);
			if(head==NULL)
			{
				head = p;
			}
			else
			{
				PolishNode *q=head;
				while(q->next!=NULL)
				{
					q=q->next;
				}
				q->next = p;
			}
		}
		void create(char *input)
		{
			char str[20];
			int i,j;
			i=0;
			while(input[i]!='\0')
			{
				j=0;
				while(isdigit(input[i]))
				{
					str[j]=input[i];
					j++;
					i++;
				}
				str[j]='\0';
				Term temp1(atoi(str));
				addatend(temp1);
				Term temp2(input[i]);
				addatend(temp2);
				i++;
			}
		}
		void show()
		{
			PolishNode *p = head;
			while(p!=NULL)
			{
				if(p->term.flag == 1)
				{
					cout<<p->term.opr.oprtr<<" ";
				}
				else
				{
					cout<<p->term.opr.oprnd<<" ";
				}
				p=p->next;
			}
		}
		void convert(PolishSLL &postfix)
		{
			Stack <char>stk;
			char expop,stkop;
			PolishNode *p = head;
			while(p!=NULL)
			{
				if(p->term.flag == 2)
				{
					postfix.addatend(p->term);
				}
				else
				{
					expop = p->term.opr.oprtr;
					while(!stk.empty())
					{
						stkop = stk.pop();
						if(priority(stkop)>=priority(expop))
						{
							postfix.addatend(Term(stkop));
						}
						else
						{
							stk.push(stkop);
							break;
						}
					}
					stk.push(expop);
				}
				p=p->next;
			}
			while(!stk.empty())
			{
				postfix.addatend(Term(stk.pop()));
			}
		}
};

int main()
{
	char input[30];
	PolishSLL infix,postfix;
	
	cout<<"Enter expression : ";
	cin.getline(input,30);
	
	infix.create(input);
	cout<<"\nInfix : ";
	infix.show();
	
	infix.convert(postfix);
	cout<<"\nPostfix = ";
	postfix.show();
 	return 0;
}
