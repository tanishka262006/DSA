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
	Node* head;
	public:
	SLL()
	{
		head=NULL;		
	}
	public:
		
	void create();
	void show();
};
void SLL::create()
{
	int n,x,i;
	cout<<"ENTER NO OF NODES YOU WANT "<<endl;
	cin>>n;
	if(n==0)
	{
		return;
	}
		cout<<"enter data \n";
		cin>>x;
		head=new Node(x);
		Node *p=head;
		for(i=0;i<n-1;i++)
		{
			cout<<"Enter data \n";
			cin>>x;
			p->next=new Node(x);
			p=p->next;
			
		}
}
void SLL::show()
{
	Node* p=head;
	while(p!=NULL)
	{
		cout<<"data is "<<p->data<<endl;
		p=p->next;
	}
}
int main()
{
	SLL list;
	list.create();
	list.show();
}
