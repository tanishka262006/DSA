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
        void addatbeg(int x);
        void addatend(int x);
        void addbypos(int pos,int x);
        int search(int x);
        int count();
};
void CLL::create()
{
	int n,x,i;
	cout<<"Enter no. of nodes you want "<<endl;
	cin>>n;
	if(n==0)
	{
		return;
	}
	else
	{
		cout<<"Enter data for first node "<<endl;
		cin>>x;
		front=new Node(x);
		rear=front;
		rear->next=front;
		Node *p=front;
		for(i=1;i<=n-1;i++)
		{
			cout<<"Enter data "<<endl;
			cin>>x;
			p->next=new Node(x);
			p=p->next;
		}
		rear=p;
		rear->next=front;
	}
	
}
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
void CLL::addbypos(int pos,int x)
{
	int c=count();
	if(pos<1 || pos>c+1)
	{
		cout<<"Invalid position "<<endl;
		return;
	}
	else if(pos==1)
	{
		addatbeg(x);
	}
	else
	{
		Node *q=new Node(x);
		Node *p=front;
		for(int i=1;i<pos-1;i++)
		{
			p=p->next;
		}
		q->next=p->next;
		p->next=q;
		
		
	}
}
int main()
{
	CLL source;
	source.create();
	source.show();
    int x;
    cout<<"Enter value to be added at beginning "<<endl;
    cin>>x;
    source.addatbeg(x);
    source.show();
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
	int pos;
	cout<<"Enter the position where you have to add Node "<<endl;
	cin>>pos;
	source.addbypos(pos,30);
	source.show();
    
}
