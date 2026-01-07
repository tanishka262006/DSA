#include<iostream>
using namespace std;

class Node 
{
   public:
    int data;
    Node *next;

    Node(int x) 
	{
        data = x;
        next = NULL;
    }
};
class Solution 
{
	Node *head;
	
  public:
  	Solution()
  	{
  		head=NULL;
	}
	
	void create()
  	{
  		int x;
  		cout<<" Keep Entering data : ";
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
	
	void addatend(int x)
	{
		Node *p=new Node(x);
		if(head==NULL)
		{
			head=p;
			return;
		}
		Node *q=head;
		while(q->next!=NULL)
		{
			q=q->next;
		}
		q->next=p;
	}
	
	void show()
	{
		Node *p=head;
		while(p!=NULL)
		{
			cout<<p->data<<" ";
			p=p->next;
		}
	}
	Node *gethead()
	{
		return head;
	}
	void createloop(int pos)
	{
		Node *p=head;
		Node *q=head;
		
		int i;
		for(i=1;i<=pos-1;i++)
		{
			p=p->next;
		}
		while(q->next!=NULL)
		{
			q=q->next;
		}
		q->next=p;
	}
	
    int detectcountLoop(Node* head) 
	{
        // code here
        Node *slow,*fast;
        Node *temp;
        slow=head;
        fast=head;
        while(1)
        {
        	if(fast==NULL || fast->next==NULL)
        	{
        		return 0;
			}
        	slow=slow->next;
        	fast=fast->next->next;
			if(slow==fast)
			{
				temp=slow->next;
				int c=1;
				while(temp!=slow)
				{
					c++;
					temp=temp->next;
				}
				return c;
				
			}
		
		}
		return 0;	
    }
};

int main()
{
	Solution Source;
	Source.create();
	Source.show();
	Source.createloop(2);
	int val=Source.detectcountLoop(Source.gethead());
	cout<<val;
	
}
