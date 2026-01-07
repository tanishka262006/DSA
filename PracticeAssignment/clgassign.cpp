#include<iostream>
using namespace std;
class Node
{
	public:
		int data;
		Node * next;
		Node()
		{
			data=0;
			next=NULL;
		}
		Node(int s)
		{
			data=s;
			next=NULL;	
		}
		~Node()
		{
			
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
		void create();
		void show();
		int search(int value);
		void addatbeg(int value);
		int count();
		void addatend(int value);
		void addbypos(int value,int pos);
		void delatbeg();
		void delatend();
		void delbypos(int pos);
	
};
void SLL::create()
{
	int n,x,i;
	cout<<"enter how many nodes you want ";
	cin>>n;
	if(n==0)
	{
		return;
	}
	cout<<"enter value ";
	cin>>x;
	Node *p;
	head=new Node(x);
	p=head;
	for(i=0;i<n-1;i++)
	{
		cout<<"enter value ";
		cin>>x;
		p->next=new Node(x);
		p=p->next;
	}
}
void SLL::show()
{
	Node *p=head;
	if(head==NULL)
	{
		cout<<"empty list ";
	}
	while(p!=NULL)
	{
		cout<<"data is "<<p->data<<endl;
		p=p->next;
	}
}
int SLL::search(int value)
{
	Node *p=head;
	while(p!=NULL)
	{
		if(p->data==value)
		{
			return 1;
		}
		p=p->next;	
	}
	return 0;
}
int SLL::count()
{
	Node *p=head;
	if(head==NULL)
	{
		cout<<"Empty list ";
	}
	int count=0;
	while(p!=NULL)
	{
		count++;
		p=p->next;
	}
	
	return count;
}
void SLL::addatbeg(int value)
{
	if(head==NULL)
	{
		head=new Node(value);
		return;
	}
	Node *p=new Node(value);
	Node *q=head;
	p->next=head;
	head=p;
	cout<<"after add at beginning :"<<endl;
	show();
}
void SLL::addatend(int value)
{
	if(head==NULL)
	{
		addatbeg(value);
	}
	Node *q=head;
	Node *p=new Node(value);
	while(q->next!=NULL)
	{
		q=q->next;
	}
	q->next=p;
	cout<<"after add at end :"<<endl;
	show();
}
void SLL::addbypos(int value,int pos)
{
	if(pos<1 || pos>count()+1)
	{
		cout<<"Invalid position "<<endl;
	}
	if(head==NULL)
	{
		addatbeg(value);
	}
	Node *p=new Node(value);
	Node *q=head;
	for(int i=1;i<pos-1;i++)
	{
		q=q->next;
	}
	p->next=q->next;
	q->next=p;
	cout<<"after add at position :"<<pos<<endl;
	show();		
}
void SLL::delatbeg()
{
	if(head==NULL)
	{
		cout<<"empty list ";
		return;
	}
	else if(head->next==NULL)
	{
		Node *p=head;
		head=NULL;
		delete p;
		return;
	}
	Node *p=head;
	head=head->next;
	delete p;
	cout<<"after delete at beginning or position 1 :"<<endl;
	show();
}
void SLL::delatend()
{
	if(head==NULL)
	{
		cout<<"empty list "<<endl;
	}
	if(head->next==NULL)
	{
		delatbeg();
		
	}
	Node *p=head;
	Node *q=head;
	while(q->next!=NULL)
	{
		p=q;
		q=q->next;
	}
	p->next=NULL;
	delete q;
	cout<<"after delete at end :"<<endl;
	show();
}
void SLL::delbypos(int pos)
{
	if(head==NULL)
	{
		cout<<"Empty list "<<endl;
		return;
	}
	if(pos<1 || pos>count())
	{
		cout<<"Invalid postion "<<endl;
		return ;
	}
	if(pos==1)
	{
		delatbeg();
	}
	else
	{
		Node *p,*q;
		int i;
		q=head;
		p=head;
		for(i=0;i<pos-1;i++)
		{
			q=p;
			p=p->next;
		}
		q->next=p->next;
		p->next=NULL;
		delete p;
		cout<<"after delete at position :"<<pos<<endl;
	show();		
	}
	
	
}
int main()
{
	SLL source;
	source.create();
	source.addatbeg(20);
	source.addatend(40);
	source.addbypos(50,3);
	source.addatbeg(60);
	source.addatend(70);
	source.delatbeg();
	source.delatend();
	source.delbypos(1);
	source.delatbeg();
	source.delatend();
	
	
}
