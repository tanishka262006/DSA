#include<iostream>
using namespace std;
class Node
{
	public:
    int data;
    Node* next;

    Node(int x)
	{
        data = x;
        next = NULL;
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
		void addatend(int x)
		{
			Node *p=new Node(x);
			if(head==NULL)
			{
				head=p;
				return;
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
		void show()
		{
			Node *q=head;
			if(head==NULL)
			{
				return;
			}
			while(q!=NULL)
			{
				cout<<"data is :"<<q->data<<" ";
				q=q->next;
			}
		}
		Node* deleteMid(Node* p) {
        // Your Code Here
        if(p==NULL)
        {
            return NULL;
        }
        if(p->next==NULL)
        {
            Node *q=p;
            delete q;
            return NULL;
        }
        Node *slow=p;
        Node *prev=NULL;
        Node *fast=p;
        while(fast!=NULL && fast->next!=NULL)
        {
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
            
        }
        prev->next=slow->next;
        delete slow;
        return p;
    }
    Node *gethead()
    {
    	return head;
	}
	friend int main();
    
};

// Deletes middle of linked list and returns head of the modified list

int main()
{
	SLL source;
	for(int i=1;i<5;i++)
	{
		source.addatend(i*1);
	}
	source.show();
	source.head=source.deleteMid(source.gethead());
	cout<<endl;
	source.show();
}
