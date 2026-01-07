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
	
    bool detectLoop(Node* head) 
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
        		return false;
			}
        	slow=slow->next;
        	fast=fast->next->next;
			if(slow==fast)
			{
				temp=slow;
				break;
			}
		}
		return true;
    }
};

int main()
{
	Solution Source;
	Source.create();
	Source.show();
	Source.createloop(2);
	bool val=Source.detectLoop(Source.gethead());
	if(val==true)
	{
		cout<<"Loop present"<<endl;
	}
	else
	{
		cout<<"Loop not present"<<endl;
	}
}
