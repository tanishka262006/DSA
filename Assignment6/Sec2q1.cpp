/*Create a singly linked list of integers.Implement following functions as independant functions.
	(Revise independant function through notebook.Think about diagram)
	-create()
	-show()
	-addatbeg()
	-addatend() 
	-search()
	-count()
	-delatbeg()
	-delatend()
	-sort()
	*/
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
class SLL
{
	Node *head;
	public:
		SLL()
		{
			head=NULL;
		}
		Node* gethead()
		{
			return head;
		}
		friend void create(SLL & list);
		friend void addatbeg(SLL & list,int val);
		
};
void addatbeg(SLL & list,int val)
{
	Node *p=new Node(val);
	if(list.head==NULL)
	{
		list.head=p;
		return;
	}
	else
	{
		p->next=list.head;
		list.head=p;
	}

}
void addatend(SLL & list,int val)
{
	Node *p=new Node(val);
	Node *q=list.gethead();
	while(q->next!=NULL)
	{
		q=q->next;
	}
	q->next=p;
	cout<<"After add at end "<<endl;
	
}
void create(SLL & list)
{
	int n,x,i;
	cout<<"Enter how many nodes you want "<<endl;
	cin>>n;
	if(n==0)
	{
		return;
	}
	if(n==1)
	{
		cout<<"Enter data ";
		cin>>x;
		addatbeg(list,x);
		return;
	}
	else
	{
		cout<<"Enter data ";
		cin>>x;
		list.head=new Node(x);
		Node *p=list.head;
		for(i=0;i<n-1;i++)
		{
			cout<<"Enter data "<<endl;
			cin>>x;
			p->next=new Node(x);
			p=p->next;
		}
		
	}	
}
void show(SLL list)
{
	Node *p=list.gethead();
	while(p!=NULL)
	{
		cout<<"data is "<<p->data<<endl;
		p=p->next;
	}
}
int main()
{
	SLL list;
	create(list);
	show(list);
	addatend(list,10);
	show(list);
	}

