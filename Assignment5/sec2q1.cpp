//1.Create 2 linkedlist of integers.Merge them in third linkedlist.
//All the functions you define must be independant functions.
//(just merge,not sort)
#include<iostream>
using namespace std;
class Node
{
	public:
		Node *next;
		int data;
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
	public:
	SLL()
	{
		head=NULL;
	}
	friend void create(SLL& temp1);
	friend void merge(SLL temp1,SLL temp2,SLL & res);
	friend void show(SLL temp1);
	friend void addatend(SLL &temp,int val);
};
void create(SLL& temp1)
{
	int x,n,i;
	cout<<"Enter how many nodes you want "<<endl;
	cin>>n;
	cout<<"Enter data \n";
	cin>>x;
	temp1.head=new Node(x);
	Node *p=temp1.head;
	for(i=0;i<n-1;i++)
	{
		cout<<"Enter data \n";
		cin>>x;
		p->next=new Node(x);
		p=p->next;
	}
	
}
void show(SLL temp1)
{
	Node *p=temp1.head;
	while(p!=NULL)
	{
		cout<<"data is "<<p->data<<endl;
		p=p->next;
	}
}
void addatend(SLL &temp,int val)
{
	Node *p=new Node(val);
	if(temp.head==NULL)
	{
		temp.head=p;
		return;
	}
	Node *q=temp.head;
	while(q->next!=NULL)
	{
		q=q->next;
	}
	q->next=p;
}
void merge(SLL temp1,SLL temp2,SLL & res)
{
	Node *p=temp1.head;
	while(p!=NULL)
	{
		addatend(res,p->data);
		p=p->next;
	}
	p=temp2.head;
	while(p!=NULL)
	{
		addatend(res,p->data);
		p=p->next;
	}
}
int main()
{
	SLL list1,list2,result;
	create(list1);
	show(list1);
	create(list2);
	show(list2);
	cout<<"merge list is "<<endl;
	merge(list1,list2,result);
	show(result);
}
