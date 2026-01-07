#include<iostream>
using namespace std;
int i,j;
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
		void create(int n);
		void show(int n);
	
};
void SLL::create(int n)
{
	cout<<"how many nodes you want ";
	cin>>n;
	Node *p;
	
	cout<<"enter first value";
	int x;
		cin>>x;
		head=new Node(x);
		p=head;
	for(i=0;i<n-1;i++)
	{
		cout<<"enter value ";
		int x;
		cin>>x;
		p->next=new Node(x);
		p=p->next;
	}
}
void SLL::show(int n)
{
	cout<<"list is "<<endl;
	Node* p=head;
	while(p!=NULL)
	{
		cout<<p->data<<endl;
		p=p->next;
	}
}
int main()
{
	SLL list;
	int n;
	list.create(n);
	list.show(n);
}
