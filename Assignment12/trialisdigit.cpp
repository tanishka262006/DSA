#include<iostream>
#define MAX 20
#include<stdlib.h>
using namespace std;
template <class T>
class Stack
{
	T data[MAX];
	int top;
	public:
		Stack()
		{
			top=-1;
		}
		void push(char x)
		{
			if(full())
			{
				return;
			}
			top++;
			data[top]=x;
		}
		char pop()
		{
			if(empty())
			{
				return 0;
			}
			char x=data[top];
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

class Term
{
	public:
		public:
	union OperandOperator
	{
		int oprnd;
		char oprtr;
	};
	public:
	/*flag =1 for operator and flag =2 for operand*/
	int flag;
	OperandOperator opr;
	Term()
	{
		flag=0;
	}
	Term(int flag,int oprnd)
	{
		this->flag=flag;
		this->opr.oprnd=oprnd;
	}
	Term(int flag,char oprtr)
	{
		this->flag=flag;
		this->opr.oprtr=oprtr;
	}
	
};
class PolishNode
{
	public:
		Term data;
		PolishNode *next;
		
		PolishNode()
		{
			next=NULL;
		}
		PolishNode(Term temp)
		{
			data=temp;
			next=NULL;
		}
};
class PolishSLL
{
	PolishNode *head;
	public:
		PolishSLL()
		{
			head=NULL;
		}

		bool isDigit(char s)
		{
			if(s>='0' && s<='9')
			{
				return 1;
			}
			return 0;
		}
		void addatend(Term x)
		{
			PolishNode *p=new PolishNode(x);
			if(head==NULL)
			{
				head=p;
				return;
			}
			else
			{
				PolishNode *q=head;
				while(q->next!=NULL)
				{
					q=q->next;
				}
				q->next=p;
			}
		}
		void show()
		{
			
			if(head==NULL)
			{
				return;
			}
			PolishNode *p=head;
			while(p!=NULL)
			{
				if(p->data.flag==1)
				{
					cout<<p->data.opr.oprtr<<" ";
					
				
				}
				else if(p->data.flag==2)
				{
					cout<<p->data.opr.oprnd<<" ";
					
				
				}
					p=p->next;
			}
		}
		void create(char *input)
		{
			int i=0;
			int j;
			char str[30];
			while(input[i]!='\0')
			{
				j=0;
				while(isDigit(input[i]))
				{
					str[j]=input[i];
					j++;
					i++;
				}
				str[j]='\0';
				if(j>0)
				{
					Term temp(2,atoi(str));
					addatend(temp);
				}
				
				if(input[i]!='\0')
				{
					Term temp(1,input[i]);
					addatend(temp);
				}
				i++;
			}
		}
		int priority(char s)
		{
			if(s=='*' || s=='/')
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
		void infixtopostfix(PolishSLL & Postfix)
		{
		
			Stack<char> stk;
			char expop,stkop;
			if(head==NULL)
			{
				return;
			}
			PolishNode *p=head;
			while(p!=NULL)
			{
				if(p->data.flag==2)
				{
					Postfix.addatend(p->data);
				}
				else if(p->data.flag==1)
				{
					expop=p->data.opr.oprtr;
					
					while(!stk.empty())
					{
						
						stkop=stk.pop();
						if(priority(stkop)>=priority(expop))
						{
							Postfix.addatend(Term(1,stkop));
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
						Postfix.addatend(Term(1,stk.pop()));
					}
			
		}
};

int main()
{
	PolishSLL source,postfix;
	char str[30];
	char input[30];
	cout<<"Enter infix expression :";
	cin.getline(input,30);
	source.create(input);
	source.show();
	cout<<endl;
	source.infixtopostfix(postfix);
	postfix.show();
}
