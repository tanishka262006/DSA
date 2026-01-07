#include<iostream>
#include<string.h>
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
    void create();
    void addatend(int val);
    void show();
};
void SLL::addatend(int val)
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
void SLL::show()
{
	Node* p=head;
	while(p!=NULL)
	{
		cout<<"data is "<<p->data<<endl;
		p=p->next;
	}
}
void SLL::create()
{
    int x;
    char str[20];
    cout<<"Enter numbers "<<endl;
    while(1)
    {
        
        cin.getline(str,20);
        int res=strcmp(str,"STOP");
        if(res==0)
        {
            return ;
        }
        else{

            x=atoi(str);
        addatend(x);
        }
        

    }
}
int main()
{
    SLL list;
    list.create();
    list.show();
}