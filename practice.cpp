#include<iostream>
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
		~Node()
		{
			cout<<"Destructor";
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
		int count();
		int search(int n);
		void addatbegging(int x);
		void addatend(int x);
		void addbyposition();	
};

int main()
{
	SLL list;
	list.create();
	list.show();
	
	cout<<"No. of elements in list : "<<list.count()<<endl;
	int x, pos;
	cout<<"Enter number to search : ";
	cin>>x;
	if(list.search(x) == 1)
	{
		cout<<"Element found !"<<endl;
	}
	else
	{
		cout<<"Element NOT found !!"<<endl;
	}
	list.show();
	
	cout<<"Enter element to add at begining : ";
	cin>>x;
	list.addatbegging(x);
	list.show();
	
	cout<<"Enter element to add at end : ";
	cin>>x;
	list.addatend(x);
	list.show();
	list.addbyposition();
	list.show();
	
 	return 0;
}

void SLL::create()
{
	int n,x,i;
	cout<<"Enter Number Of Nodes : ";
	cin>>n;
	if(n==0)
	{
		return ;
	}
	cout<<"Enter value : ";
	cin>>x;
	
	head=new Node(x);
	Node *p=head;
	for(i=0;i<=n-1;i++)
	{
		cout<<"Enter Value : ";
		cin>>x;
		p->next=new Node(x);
		p=p->next;
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

int SLL::count()
{
	Node *p=head;
	int count=0;
	
	while(p!=NULL)
	{
		count++;
		p=p->next;
	}
	
	return count;
}

int SLL::search(int n)
{
	Node *p=head;
	int flag=0;
	
	while(p!=NULL)
	{
		if(p->data==n)
		{
			flag=1;
			return flag;
		}
		p=p->next;
	}
	return 0;
}

void SLL::addatbegging(int x)
{
	Node *p;
	p=new Node(x);
	
	if(head==NULL)
	{
		head=p;
	}
	else
	{
		p->next=head;
		head=p;
	}
}

void SLL::addatend(int x)
{
	Node *q=new Node(x);
	
	if(head==NULL)
	{
		head=q;
	}
	else
	{
		Node *p=head;
		
		while(p->next!=NULL)
		{
			p=p->next;
		}
		p->next=q;
	}
}

void SLL::addbyposition()
{
	int i,pos,value;
	
	cout<<"Enter the Position to be added : ";
	cin>>pos;
	cout<<"Enter Value : ";
	cin>>value;
	if(pos==1)
	{
		addatbegging(value);
	}
	else
	{
		Node *p=head;
		Node *q=new Node(value);
		for(i=0;i<pos-1;i++)
		{
			p=p->next;
		}
		q->next=p->next;
		p->next=q;
	}
}
