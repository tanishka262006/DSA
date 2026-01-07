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
    void show();
    friend void addatendind(SLL &Temp,int val);
		
};
void SLL::show()
{
	Node* p=head;
	while(p!=NULL)
	{
		cout<<"data is "<<p->data<<endl;
		p=p->next;
	}
}
void addatendind(SLL &Temp,int val)
{
    Node *q=new Node(val);
    if(Temp.head==NULL)
    {
        Temp.head=q;
        return;
        
    }
    Node *p=Temp.head;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=q;
}
int main()
{
    SLL List;
    int value;
    cout<<"Enter value to be added at end \n";
    cin>>value;
    addatendind(List,value);
    List.show();
}