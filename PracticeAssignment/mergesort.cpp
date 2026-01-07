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
    void mergesort(SLL list2,SLL list1);
    void addatendind(int val);
    void sort();
    
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
void SLL::mergesort(SLL list2,SLL list1)
{
    Node *p=list1.head;
    Node *q=list2.head;
    while (p!=NULL && q!=NULL)
    {
        if(p->data>q->data)
        {
            addatendind(q->data);
            q=q->next;
        }
        else
        {
            addatendind(p->data);
            p=p->next;
        } 
    }
    while(p!=NULL)
    {
        addatendind(p->data);
        p=p->next;
    }
    while(q!=NULL)
    {
        addatendind(q->data);
        q=q->next;
    }
    
}
void SLL::addatendind(int val)
{
    Node *q=new Node(val);
    if(head==NULL)
    {
        head=q;
        return;
        
    }
    Node *p=head;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=q;
}
void SLL::sort()
{
    Node *p=head;
    
   while(p!=NULL)
   {
    Node *q=p->next;
        while(q!=NULL)
        {
            if(p->data>q->data)
            {
                int temp=p->data;
                p->data=q->data;
                q->data=temp;
            }
            q=q->next;
        }
        p=p->next;

   }
}
int main()
{
	SLL list1,list2,res;
	list1.create();
    list1.sort();
    cout<<"List1 is \n ";

	list1.show();
    list2.create();
    list2.sort();
    cout<<"List2 is \n ";
    list1.show();
    res.mergesort(list2,list1);
    cout<<"sorted merge list is \n ";
    res.show();
}


