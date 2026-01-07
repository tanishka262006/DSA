/*Q1.Create SLL with following functions with switch case.
-recursive create_n()
-recursive show()
-recursive search()
-recursive count()
-recursive addatend()
-recursive delatend()
-recursive makeEmpty()
-sort()
*/
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
	
	Node *head;
	public:
	SLL()
	{
		head=NULL;
	}
	friend int main();
	Node* createrec(Node *p,int n)
	{
		int x,i;
		
		if(n==0)
		{
			return NULL;
		}
		cout<<"Enter value "<<endl;
		cin>>x;
		p=new Node(x);
		p->next=createrec(p->next,n-1);
		return p;	
	}
	void show(Node *p)
	{
		if(p==NULL)
		{
			//cout<<"Empty list "<<endl;
			return;
		}
		cout<<"data is "<<p->data<<endl;
		show(p->next);
	}
	Node *gethead()
	{
		return head;
	}
	int search(Node *p,int x)
	{
		if(p==NULL)
		{
			return 0;
		}
		if(p->data==x)
		{
			return 1;
		}
		int res;
		res=search(p->next,x);
		return res;
	}
	int count(Node *p)
	{
		if(p==NULL)
		{
			return 0;
		}
		else
		{
			int c=count(p->next);
			return c+1;
		}
	}
	Node *addatendrec(Node *p,int x)
	{
		if(p==NULL)
		{
			p=new Node(x);
			return p;
		}
		p=addatendrec(p->next,x);
		return p;
	}
	Node* delatendrec(Node *p)
	{
		if(p->next==NULL)
		{
			delete p;
			
			return NULL;
		}
		p->next=delatendrec(p->next);
		
		
	}
	Node *makeempty(Node *p)
	{
		if(p==NULL)
		{
			delete p;
			return NULL;
		}
		else
		{
			p->next=makeempty(p->next);
			delete p;
			return NULL;
		}
	}
};
int main()
{
	SLL source;
	int choice;
	do{
		
	cout<<"Enter chooice ";
	cin>>choice;
	switch(choice)
	{
		case 1:
			{
				int n;
				cout<<"Enter number of nodes you want "<<endl;
				cin>>n;
				source.head=source.createrec(source.gethead(),n);
				break;
			}
		case 2:
			{
				
				source.show(source.gethead());
				break;
			}
		case 3:
			{
				cout<<"Enter the data you want to search "<<endl;
				cin>>choice;
				int res=source.search(source.gethead(),choice);
				if(res==1)
				{
					cout<<"found "<<endl;
					
				}
				else
				{
					cout<<"not found "<<endl;
				
				}
				break;	
			}
		case 4:
			{
				int c=source.count(source.gethead());
				cout<<"number of nodes in the list is "<<c<<endl;
				break;
			}
		case 5:
			{
				int data;
				cout<<"Enter data to be added "<<endl;
				cin>>data;
				source.head=source.addatendrec(source.gethead(),choice);
				break;	
			}
		case 6:
			{
				source.head=source.delatendrec(source.gethead());
			}
		case 7:
			{
				source.head=source.makeempty(source.gethead());
			}
			
	}
}				

while(choice!=0);
	

	
}
