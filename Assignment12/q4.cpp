/*Q4.Create an SLL of country names containing name of country,capital of country,
population of country,currency of country.Provide following functions to user.
-add country
-delete country
-search a country by  name or by capital name
-sort all countries in ascending order.
*/
#include<iostream>
#include<string.h>
using namespace std;
class Country
{
	public:
		char name[20];
		char capital[20];
		int population;
		char currency[20];
		void scan()
		{
			cout<<"Enter name of country :";
			cin.getline(name,20);
			cout<<"Enter currency of country :";
			cin.getline(currency,20);
			cout<<"Enter capital of country :";
			cin.getline(capital,20);
			cout<<"Enter population of country :";
			cin>>population;
			cin.ignore(1);
		}
		void show()
		{
			cout<<"country name :"<<name<<endl;
			cout<<"currency of country :"<<currency<<endl;
			cout<<"Population of country:"<<population<<endl;
			cout<<"Capital of country :"<<capital<<endl;
		}
		
};
class Node
{
	public:
		Country data;
		Node *next;
		Node(Country temp)
		{
			next=NULL;
			data=temp;
		}
};
class SLL
{
	
	Node *head;
	public:
	SLL()
	{
		head=NULL;	
	}
	void addatend(Country & c)
	{
		
		Node *p=new Node(c);
		if(head==NULL)
		{
			head=p;
			return;
		}
		if(head->next==NULL)
		{
			head->next=p;
			return;
			
		}
		else
		{
			Node *q=head;
			while(q->next!=NULL)
			{
				q=q->next;
			}
			q->next=p;
		}
	}
	int searchname(char *p)
	{
		if(head==NULL)
		{
			return 0;
		}
		else
		{
			int flag=0;
			Node *q=head;
			while(q!=NULL)
			{
				if(strcmp(q->data.name,p)==0)
				{
					flag=1;
				}
				q=q->next;
			}
			return flag;
		}
	}
	int searchcapital(char *p)
	{
		if(head==NULL)
		{
			return 0;
		}
		else
		{
			int flag=0;
			Node *q=head;
			while(q!=NULL)
			{
				if(strcmp(q->data.capital,p)==0)
				{
					flag=1;
				}
				q=q->next;
			}
			return flag;
		}
	}
	void delcon(char *s)
	{
		if(head==NULL)
		{
			return;
		}
		else
		{
			Node *p=head;
			Node *q;
			while(p->next!=NULL)
			{
				
				q=p;
				if(strcmp(p->data.name,s)==0)
				{
					q->next=p->next;
					delete p;
				}
				
				p=p->next;
			}
			cout<<"country not found ";
		}
		
	}
};
int main()
{
	SLL list;
	Country cn;
	for(int i=1;i<=2;i++)
	{
		cn.scan();
		list.addatend(cn);
	}
//	for(int i=1;i<3;i++)
//	{
//		cn.show();
////		list.addatend(cn);
//	}
	int c=list.searchcapital("delhi");
	if(c==1)
	{
		cout<<"found :"<<endl;
	}
	else
	{
		cout<<"not found :";
	}
	c=list.searchname("india");
	if(c==1)
	{
		cout<<"found :"<<endl;
	}
	else
	{
		cout<<"not found :";
	}
}
