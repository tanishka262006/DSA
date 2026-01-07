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
		Node *gethead()
		{
			return head;
		}
		Node* createrec(int n);
		void showrec(Node *p);
		void create();
		friend int main();
		
};
// void SLL::create()
// {
// 	int n,x,i;
// 	cout<<"ENTER NO OF NODES YOU WANT "<<endl;
// 	cin>>n;
// 	if(n==0)
// 	{
// 		return;
// 	}
// 		cout<<"enter data \n";
// 		cin>>x;
// 		head=new Node(x);
// 		Node *p=head;
// 		for(i=0;i<n-1;i++)
// 		{
// 			cout<<"Enter data \n";
// 			cin>>x;
// 			p->next=new Node(x);
// 			p=p->next;
			
// 		}
// }
void SLL::showrec(Node *p)
{
	if(p==NULL)
	{
		return;
	}
	else
	{
		
			cout<<"data is "<<p->data<<endl;
		showrec(p->next);
	}
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
		cout<<"enter data "<<endl;
		cin>>x;
		Node *p;
		p=new Node(x);
		p->next=createrec(n-1);
		return p;
	}
}
int main()
{
	SLL source;
	//source.create();
	int n;
	cout<<"How many nodes you want ";
	cin>>n;
	source.head=source.createrec(n);
	source.showrec(source.gethead());

}
