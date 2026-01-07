#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

class Node
{
	public :
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

class SLL
{
	Node *head;
	
	public :
		SLL()
		{
			head=NULL;
		}
		void create();
		void show();
		void addatend(int data);
};

int main()
{
	SLL list;
	list.create();
	list.show();
	return 0;
}

void SLL::create()
{
	char num[20];
	int x;
	cout<<"Enter Number or STOP to stop : ";
	while(1)
	{
		cin.getline(num,20);
		if(strcmp(num,"STOP")==0)
		{
			return ;
		}
		else 
		{
			x=atoi(num);
			addatend(x);
		}
	}
}

void SLL::show()
{
	Node *p=head;
	while(p!=NULL)
	{
		cout<<p->data<<endl;
		p=p->next;
	}
}

void SLL::addatend(int data)
{
	Node *p=new Node(data);
	if(head==NULL)
	{
		head=p;
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