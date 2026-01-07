/*Create a linkedlist and implement following functions.All functions must be independant functions.
-create()
-addatbeg()
-addatend()
-addbypos()
-delatbeg()
-delatend()
-delbypos()
-sort()
-makeempty()
-show()
-count()
*/
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
	friend void delatbeg(SLL & temp);

	friend void addatbeg(SLL & temp,int val);

};
void create(SLL& temp1)
{
	int x,n,i;
	cout<<"Enter how many nodes you want "<<endl;
	cin>>n;
	if(n==0)
	{
		return;
	}
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
	cout<<"list is "<<endl;
	Node *p=temp1.head;
	while(p!=NULL)
	{
		cout<<"data is "<<p->data<<endl;
		p=p->next;
	}
}
void delatbeg(SLL & temp)
{
	Node *p=temp.head;
	temp.head=p->next;
	delete p;
}
void addatbeg(SLL & temp,int val)
{
	Node*p=new Node(val);
	if(temp.head==NULL)
	{
		temp.head=p;
		return;
	}
	p->next=temp.head;
	temp.head=p;
	
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
void delatend(SLL &temp)
{
	Node *p=temp.head;
	
}
int main()
{
	SLL list1;
	create(list1);
	show(list1);
	//create(list2);
	addatbeg(list1,20);
	show(list1);
	addatend(list1,20);
	show(list1);
	delatbeg(list1);
	show(list1);
//	delatend(list1);
//	show(list1);
	
}

