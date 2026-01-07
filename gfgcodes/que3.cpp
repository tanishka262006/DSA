//Q3.Given a Doubly Linked List, the task is to reverse the given Doubly Linked List.
#include<iostream>
using namespace std;
class Node
{
	public:
		Node *prev;
		Node *next;
		int data;
		Node(int a)
		{
			prev=NULL;
			next=NULL;
			data=a;
		}
};
class DLL
{
	Node *head;
	public:
		DLL()
		{
			head=NULL;
		}
		void addatend(int a)
		{
			Node *p=new Node(a);
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
				p->prev=q;
			}
		}
		void show()
		{
			if(head==NULL)
			{
				return ;
			}
			Node *p=head;
			while(p!=NULL)
			{
				cout<<"data is "<<p->data<<" ";
				p=p->next;
			}
		}
		Node *gethead()
		{
			return head;
		}
		
};
Node *reverse(Node *p)
{
	
	if(p == NULL) 
	{
		return NULL;
	} 
	else 
	{
        Node *curr= p;
        Node *temp=NULL;
        Node *prev =NULL;

        while(curr != NULL) 
		{
            temp = curr->next;  
            curr->next = curr->prev;  
            curr->prev = temp;

            prev = curr;        
            curr = temp;         
        }

        return prev;  
    }


}
int main()
{
	DLL source;
	for(int i=0;i<4;i++)
	{
		source.addatend(i*10);
	}
	source.show();
	reverse(source.gethead());
	source.show();
	
}

