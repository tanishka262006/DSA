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
			delete next;
		}
};
class SLL
{
	Node * head;
	public:
		SLL()
		{
			head=NULL;
		}
		friend void replace(SLL & temp,int n);
		friend void show(SLL Temp);
		friend int count(SLL temp);
		friend void create(SLL & temp);
};
void create(SLL & temp)
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
	temp.head=new Node(x);
	p=temp.head;
	for(i=0;i<n-1;i++)
	{
		cout<<"enter value ";
		cin>>x;
		p->next=new Node(x);
		p=p->next;
	}
}
void show(SLL Temp)
{
	Node *p=Temp.head;
	while(p!=NULL)
	{
		cout<<"Data is "<<p->data<<endl;
		p=p->next;
	}
}
int count(SLL temp)
{
	Node *p=temp.head;
	if(temp.head==NULL)
	{
		cout<<"Empty list ";
		return 0 ;
	}
	int count=0;
	while(p!=NULL)
	{
		count++;
		p=p->next;
	}
	
	return count;
}
void replace(SLL & temp,int n)
{
	if(temp.head==NULL)
	{
		cout<<"Empty list ";
		return;
	}
	Node* p=temp.head;
	if(n>count(temp) || n<0)
	{
		cout<<"Invalid position \n";
		return ;
	}
	int value;
	cout<<"Enter value to replace ";
	cin>>value;
	
	for(int i=0;i<n-1;i++)
	{
		p=p->next;
	}
	p->data=value;	
	
}
int main()
{
	SLL List1;
	int pos;
	create(List1);
	cout<<"Enter the position where you have to replace ";
	cin>>pos;
	replace(List1,pos);
	show(List1);
	
}
