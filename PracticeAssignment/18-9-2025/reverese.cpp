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
		void create();
		void addatend(int x);
		void show();
		
		Node *gethead()
		{
			return head;
		}
		Node* reverseList(Node* head) 
		{
        // code here
        	if(head==NULL)
        	{
        		return NULL;
			}
        	else
        	{
        		Node *curr,*prev,*next;
        		prev=NULL;
        		curr=head;
        		next=head;
        		while(curr!=NULL)
        		{
        			next=curr->next;	
        			curr->next=prev;
        			prev=curr;
        			curr=next;
				}
				head=prev;
				return head;
			}
    	}
    	void myfun();
	
};


void SLL::create()
{
	int x;
	cout<<"keep entering data :";
	while(1)
	{
		cin>>x;
		if(x==0)
		{
			break;
		}
		addatend(x);
	}
	
}
void SLL::show()
{
	Node *p=head;
	if(head==NULL)
	{
		return;
	}
	while(p!=NULL)
	{
		cout<<"data is "<<p->data<<endl;
		p=p->next;
	}
}
void SLL::addatend(int x)
{
	Node *p=new Node(x);
	if(head==NULL)
	{
		head=p;
	}
	else
	{
		Node *q=head;
		while(q->next!=NULL)
		{
			q=q->next;
		}
		q->next=p;
	}
}
void SLL:: myfun()
{
		head=reverseList(gethead());
}
int main()
{
	SLL source;
	source.create();
	source.show();
	source.myfun();
	cout<<endl;
	source.show();
	
}
