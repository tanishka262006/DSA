#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
class Node
{
	public:
		int data;
		Node *next;
		Node()
		{
			data=0;
			next=NULL;
		}
		Node(int a)
		{
			data=a;
			next=NULL;
		}
};
class CLL
{
	Node *front;
	Node *rear;
	public:
		CLL()
		{
			front=NULL;
			rear=NULL;
		}
		public:
		Node * getfront()
		{
			return front;
		}
		Node * getrear()
		{
			return rear;
		}
		friend int main();
		friend void addatend(CLL & source,int x);
		friend void delatend(CLL & source);
	
};

void show(CLL source)
{
	if(source.getfront()==NULL)
	{
		return;
	}
	Node *p=source.getfront();
	do
	{
		cout<<"data is "<<p->data<<endl;
		p=p->next;
	}
	while(p!=source.getfront());
}

int count(CLL source)
{
	int c=0;
	if(source.getfront()==NULL)
	{
		return 0;
	}
	
	else
	{
		Node *p=source.getfront();
		do
		{
			c++;
			p=p->next;
		}
		while(p!=source.getfront());
		return c;
	}
}
void addatend(CLL & source,int x)
{
    Node *p=new Node(x);
    if(source.getfront()==NULL)
    {
        source.front=p;
        source.rear=p;
        source.rear->next=source.front;
    }
    else
    {
        p->next=source.front;
       source.rear->next=p;
       source.rear=p;

    }
}
//void merge(CLL source1,CLL source2)
//{
//	Node *p=source1.getfront();
//	while()
//}
int search(CLL source,int x)
{
    if(source.getfront()==NULL)
    {
    	return 0;
	}
	else
	{
		Node *p=source.getfront();
		do
		{
			if(p->data==x)
			{
				return 1;
			}
			p=p->next;
		}
		while(p!=source.getfront());
		return 0;
	}
}

void create(CLL & source)
{
	char str[20];
	while(1)
	{
		cout<<"Enter data : ";
		cin.getline(str,20);
		
		if(strcmp(str,"STOP")==0)
		{
			return;
		}
		addatend(source,atoi(str));
	}
}
void delatend(CLL & source)
{
	if(source.getfront()==NULL)
	{
		cout<<"Empty list "<<endl;
		return;
	}
	else if(source.getfront()==source.getrear())
	{
		delete source.front;
		source.front=NULL;
		source.rear=NULL;
	}
	else
	{
		Node *p=source.front;
		while(p->next!=source.rear)
		{
			p=p->next;
		}
		
		delete source.rear;
		source.rear=p;
		source.rear->next=source.front;	
	}
}
int main()
{
	CLL source;
	create(source);
	show(source);
    int x;
    cout<<"Enter value to be added at end "<<endl;
    cin>>x;
    addatend(source,x);
    show(source);
    cout<<"Enter value to search in list "<<endl;
    cin>>x;
    if(search(source,x)==1)
	{
		cout<<"Element found "<<endl;
	}   
	else
	{
		cout<<"data Not found "<<endl;
	} 
	int c=count(source);
	cout<<"Number of nodes in the list is "<<c<<endl;
	delatend(source);
	cout<<"After delete at end data is "<<endl;
	show(source);
  
}
