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
    friend void merge(SLL temp1,SLL temp2,SLL & res);
    friend void addatendind(SLL &Temp,int val);
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
void merge(SLL temp1,SLL temp2,SLL & res)
{
    Node *p=temp1.head;
    while(p!=NULL)
    {
        addatendind(res,p->data);
        p=p->next;
    }
   p=temp2.head;
    while(p!=NULL)
    {
        addatendind(res,p->data);
        p=p->next;
    }
}
int main()
{
	SLL list1,list2,result;
	list1.create();
    list2.create();
	// list.show();
    merge(list1,list2,result);
    result.show();

}
