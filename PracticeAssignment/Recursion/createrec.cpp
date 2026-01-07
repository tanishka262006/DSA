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
		~Node()
		{
			delete next;
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
		~SLL()
		{
			delete head;
		}
		Node* createrec(int n);
		Node* gethead();
		friend int main();
		void showrec(Node *p);
};
Node* SLL::gethead()
{
	return head;
}
Node* SLL::createrec(int n)
{
	if(n==0)
	{
		return NULL;
	}
	else
	{
		int x;
		Node *p;
		cout<<"Enter data "<<endl;
		cin>>x;
		p=new Node(x);
		p->next =createrec(n-1);
		return p;
	}
}
void SLL::showrec(Node *p)
{
	if(p==NULL)
	{
		return;
	}
	else
	{
		cout<<p->data<<" ";
		showrec(p->next);
	}
}
int main()
{
	SLL list;
	int n;
	cout<<"Enter number of nodes "<<endl;
	cin>>n;
	list.head=list.createrec(n);
	list.showrec(list.gethead());
	
}
