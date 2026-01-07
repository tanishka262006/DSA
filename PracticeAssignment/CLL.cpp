#include<iostream>
using namespace std;

class Node
{
	public:
		int data;
		Node *next;
		Node()
		{
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
	private:
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
			
		
};
	void CLL::create()
	{
		int n,x,i;
		cout<<"Enter number of nodes you want "<<endl;
		cin>>n;
		if(n==0)
		{
			return;
		}
		cout<<"Enter data to be added at first node "<<endl;
		cin>>x;
		front=new Node(x);
		rear=front;
		rear->next=front;
		Node* p=front;
		for(i=0;i<n-1;i++)
		{
			cout<<"Enter data "<<endl;
			cin>>x;
			p->next=new Node(x);
			p=p->next;
		}
		rear=p;
		rear->next=front;
	}
	void CLL::show()
	{
		Node *p=front;
		do
		{
			cout<<"data is "<<p->data<<endl;
			p=p->next;
			
		}
		while(p!=front);
	}
int main()
{
	CLL source;
	source.create();
	source.show();
}
