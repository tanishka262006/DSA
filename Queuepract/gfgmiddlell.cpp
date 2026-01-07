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

class Solution 
{
  public:
  
    int getMiddle(Node* head) {
        // code here
        Node *p=head;
        int count=0;
        while(p!=NULL)
        {
            count++;
            p=p->next;
        }
        p=head;
        if(head==NULL)
        {
            return 0;
        }
        if(count%2==0)
        {
            for(int i=1;i<=count+1;i++)
            {
                p=p->next;
            }
            
        }
        else
        {
            for(int i=1;i<=count;i++)
            {
                 p=p->next;
            }
            
        }
        return p->data;
    }
    int empty()
    {
    	if(head==NULL)
    	{
    		return 1;
		}
		return 0;
	}
    void addatend(int x)
    {
    	Node *p=new Node(x);
    	if(empty())
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
		}
	}
};
int main()
{
	
}
