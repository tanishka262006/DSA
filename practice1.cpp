#include<iostream>
using namespace  std;
class Node
{
    public:
    int data;
    Node *next;
    Node()
    {

    }
    Node(int a)
    {
        data=a;
        next = NULL;
    }
    ~Node()
    {
        cout<<"destructor called ";
    }
};
class SLL
{   
    Node * head;
    public:
    void create();
    void show();
    void addatbeg(int value);
    void addatend(int value);
    ~SLL()
    {
        cout<<"destructor called ";
    }
};
void SLL::create()
{
    int num,value;
    cout<<"how many nodes you want ";
    cin>>num;
    cout<<"enter value ";
    cin>>value;
    head=new Node(value);
    Node * p=head;

    for(int i=0;i<num-1;i++)
    {
        cout<<"enter value ";
        cin>>value;
        p->next=new Node(value);
        p=p->next;
    }
}
void SLL::show()
{
   
    Node* p=head;
    while(p!=NULL)
    {
        cout<<p->data<<endl;
        p=p->next;
    }
}
void SLL::addatbeg(int a)
{
    Node *p=new Node(a);
    p->next=head;
    head=p;
}
void SLL:: addatend(int x)
{
	Node *q=new Node(x);
	
	if(head==NULL)
	{
		head=q;
	}
	else
	{
		Node *p=head;
		
		while(p->next!=NULL)
		{
			p=p->next;
		}
		p->next=q;
	}
}
int main()
{
    SLL List;
    List.create();
    List.show();
    int value;
    int choice;
    cin>>choice;
    switch (choice)
    {
    case 1:
        /* code */
        cout<<"Enter value to be added ";
    cin>>value;
     List.addatbeg(value);
     List.show();
        break;
    case 2:
    {
        cout<<"Enter value to be added ";
    cin>>value;
    List.addatend(value);
    List.show();
        break;
    }
    default:
        break;
    }


}
