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
		
		void create();
		void show();
        
        void addatend(int x);
        void delatend();
        int search(int x);
        int count();
};

void CLL::show()
{
	if(front==NULL)
	{
		return;
	}
	Node *p=front;
	do
	{
		cout<<"data is "<<p->data<<endl;
		p=p->next;
	}
	while(p!=front);
}

int CLL::count()
{
	int c=0;
	if(front==NULL)
	{
		return 0;
	}
	
	else
	{
		Node *p=front;
		do
		{
			c++;
			p=p->next;
		}
		while(p!=front);
		return c;
	}
}
void CLL::addatend(int x)
{
    Node *p=new Node(x);
    if(front==NULL)
    {
        front=p;
        rear=p;
        rear->next=front;
    }
    else
    {
        p->next=front;
       rear->next=p;
       rear=p;

    }
}
int CLL::search(int x)
{
    if(front==NULL)
    {
    	return 0;
	}
	else
	{
		Node *p=front;
		do
		{
			if(p->data==x)
			{
				return 1;
			}
			p=p->next;
		}
		while(p!=front);
	}
}

void CLL::create()
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
		addatend(atoi(str));
	}
}
void CLL::delatend()
{
	if(front==NULL)
	{
		cout<<"Empty list "<<endl;
		return;
	}
	else if(front==rear)
	{
		delete front;
		front=NULL;
		rear=NULL;
	}
	else
	{
		Node *p=front;
		while(p->next!=rear)
		{
			p=p->next;
		}
		delete rear;
		rear=p;
		rear->next=front;
		
	}
}
int main()
{
	CLL source;
	source.create();
	source.show();
    int x;
    cout<<"Enter value to be added at end "<<endl;
    cin>>x;

    source.addatend(x);
    source.show();
    cout<<"Enter value to serach in list "<<endl;
    cin>>x;
    if(source.search(x)==1)
	{
		cout<<"Element found "<<endl;
	}   
	else
	{
		cout<<"data Not found "<<endl;
	} 
	int c=source.count();
	cout<<"Number of nodes in the list is "<<c<<endl;
	
	
	source.delatend();
	cout<<"After delete at end data is "<<endl;
	source.show();
    
}
