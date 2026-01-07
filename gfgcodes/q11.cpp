#include<iostream>
#include<math.h>
using namespace std;
class FactorNode
{
	public:
		int factor;
		FactorNode *factnext;
		FactorNode(int factor)
		{
			this->factor=factor;
			factnext=NULL;	
		}
};
class factorSLL
{
	public:
		FactorNode *facthead;
		factorSLL()
		{
			facthead=NULL;
		}
		void showfactor()
		{
			FactorNode *p=facthead;
			if(facthead==NULL)
			{
				return;
			}
			while(p!=NULL)
			{
				cout<<"factors are :"<<p->factor<<" ";
				p=p->factnext;
			}
		}
		void addatend(int factor)
		{
			FactorNode *p=new FactorNode(factor);
			if(facthead==NULL)
			{
				facthead=p;
			}
			else
			{
				FactorNode *q=facthead;
				while(q->factnext!=NULL)
				{
					q=q->factnext;
				}
				q->factnext=p;
			}
		}
		
	
};

class Node 
{
	public:
		int data;
		Node *next;
		factorSLL obj;
		Node(int x)
		{
			data=x;
			next=NULL;
				
			if(x<0)
			{
				return;
			}
			int i;
		    for(i=2;i<=sqrt(x);i++) 
			{
		        while(x%i== 0) 
				{
		            //cout<<i<<" ";
		            obj.addatend(i);
		            x=x/i;
		        }
			}
			if(x>1) 
			{
		        obj.addatend(x);
		    }
					
			
//			for(int i=1;i<=n;i++)
//			{
//				if(n%i==0)
//				{
//					obj.addatend(i);
//				}
//			}
			
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
		void create()
		{
			int x;
			cout<<"Enter number :(enter 0 to stop)";
			cin>>x;
			cout<<"\nhello "<<endl;
			head=new Node(x);
			
			Node *p=head;
			cout<<"hello";
			
			
				while(1)
				{
					cout<<"Enter number :(enter 0 to stop)";
					cin>>x;
					if(x==0)
					{
						break;
					}
					p->next=new Node(x);
					p=p->next;
			
			
			
			
		}
//		void addatend(int x)
//		{
//			Node *p=new Node(x);
//			if(head==NULL)
//			{
//				head=p;
//			}
//			else
//			{
//				Node *q=head;
//				while(q->next==NULL)
//				{
//					q=q->next;
//				}
//				q->next=p;
//			}
	}
		void show()
		{
			if(head==NULL)
			{
				return;
			}
			else
			{
				Node *q=head;
				while(q!=NULL)
				{
					cout<<"data is "<<q->data<<" ";
					q->obj.showfactor();
					cout<<endl;
					q=q->next;
				}
			}
		}
		
};
int main()
{
	SLL source;
	
	source.create();

	source.show();
	
}
