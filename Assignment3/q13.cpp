#include<iostream>
using namespace std;

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
		Node(int value)
		{
			data=value;
			next=NULL;
		}
};
//Q13.Write program to create a linkedlist for 4 runtime objects of class Node.
//Print data of all the nodes.Count how many times 10 is present in the list.
int main()
{
	Node *p,*head;
	int value;
	cin>>value;
	head=new Node(value);
	for(int i=0;i<3;i++)
	{
		cout<<"enter value to be added ";
		cin>>value;
		p=new Node(value);
		p=p->next;
	}
	p=head;
	while(p!=NULL)
	{
		if(p->data==10)
		{
			cout<<"present ";
		}
		else
		{
			cout<<"not present ";
		}
		p=p->next;
	}
	
	
}
