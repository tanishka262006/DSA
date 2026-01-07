#include<iostream>
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
		int count();
		void delatbeg();
		void delatend();
		void delbypos(int pos);
		void addatbeg(int x);
        void addatend(int x);
};
void CLL::addatbeg(int x)
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
        front=p;
        rear->next=front;
    }
    cout<<"After add at beginning "<<endl;
    show();
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
    cout<<"After add at end "<<endl;
	show();
}

void CLL::create()
{
	Node *p;
	int n,x,i;
	cout<<"Enter number of nodes you want "<<endl;
	cin>>n;
	if(n==0)
	{
		return;
	}
	cout<<"Enter data for first node "<<endl;
	cin>>x;
	front=new Node(x);
	//rear=front;
	p=front;
	for(i=0;i<n-1;i++)
	{
		cout<<"Enter data "<<endl;
		cin>>x;
		p->next=new Node(x);
		p=p->next;
	}
	rear=p;
	rear->next=front;
}
void CLL::show()
{
	if(front==NULL)
	{
		cout<<"Empty list "<<endl;
		return;
	}
	Node *p=front;
	do
	{
		cout<<"Data is "<<p->data<<endl;
		p=p->next;
	}
	while(p!=front);
}
void CLL::delatbeg()
{
	if(front==NULL)
	{
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
		front=p->next;
		rear->next=front;
		delete p;
	}
	cout<<"After delete at beginning :"<<endl;
	show();
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
		return;
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
	cout<<"After delete at end"<<endl;
	show();
}
void CLL::delbypos(int pos)
{
	int c=count();
	if(pos<1 || pos>c)
	{
		cout<<"Invalid position "<<endl;
		
		return;
	}
	else if(pos==1)
	{
		delatbeg();
	}
	else if(pos==c)
	{
		delatend();
		cout<<"After delete at "<<pos<<endl;
	show();
	}
	else
	{
		Node *p=front;
		Node *q=front;
		for(int i=1;i<=pos-1;i++)
		{
			q=p;
			p=p->next;
		}
		q->next=p->next;
		delete p;
	}
	cout<<"After delete at "<<pos<<endl;
	show();
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
int main()
{
	CLL source;
	source.create();
	source.show();
	source.delatbeg();
	source.addatbeg(20);
	source.addatbeg(40);
	source.delatend();
	source.addatbeg(50);
	
	int pos;
	cout<<"Enter position for deleting node "<<endl;
	cin>>pos;
	source.delbypos(pos);
	source.addatbeg(10);
	
}
