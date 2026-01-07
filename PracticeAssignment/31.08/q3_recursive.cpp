#include<iostream>
#include<string.h>
#include<stdlib.h>
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
class CLL
{
	Node *front;
	Node *rear;
	public:
		CLL()
		{
			front=NULL;
			rear=NULL;
		}
		
		Node *createrec();
		void showrec();
        void addatendrec(int x);
        void delatendrec();
        int searchrec(int x);
        int countrec();
        friend int main();
};
Node* CLL::createrec()
{
	char str[20];
	cout<<"Enter data "<<endl;
	cin>>str;
	if(strcmp(str,"STOP")==0)
	{
		return NULL;
	}
	Node *p;
	p=new Node(atoi(str));
	rear=p;
	p->next=createrec();
	rear->next=front;
	return p;	
}

int main()
{
	CLL source;
	source.front=source.createrec();
}
