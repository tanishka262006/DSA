/*Create a doubly linked list(DLL) of integers.Implement following functions as independant functions.
	(Revise independant function through notebook.Think about diagram)
	-create()
	-show()
	-addatbeg()
	-addatend() 
	-search()
	-count()
	-delatbeg()
	-delatend()
	-sort()
*/
#include<iostream>
using namespace std;
class Node
{
	public:
		int data;
		Node *next;
		Node *prev;
		Node()
		{
			
			data=0;
			next=NULL;
			prev=NULL;
		}
		Node(int a)
		{
			prev=NULL;
			data=a;
			next=NULL;
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
		friend void create(DLL & temp);
		friend void show(DLL temp);
		friend void addatbeg(DLL & temp,int x);
		
};

		void create(DLL & temp)
		{
			int n,x,i;
			cout<<"Enter how many nodes you want "<<endl;
			cin>>n;
			if(n==0)
			{
				return;
			}
			cout<<"Enter data :";
			cin>>x;
			temp.head=new Node(x);
			
			Node *p=temp.head;
			for(i=0;i<n-1;i++)
			{
				cout<<"Enter data :";
				cin>>x;
				p->next=new Node(x);
				p->next->prev=p;
				p=p->next;
				
			}
		}
		void show(DLL temp)
		{
			
			if(temp.head==NULL)
			{
				return;
			}
			
			else
			{
				Node *p=temp.head;
				while(p!=NULL)
				{
					cout<<"data is "<<p->data<<endl;
					p=p->next;
				}
			}
		}
		void addatbeg(DLL & temp,int x)
		{
			Node *p=new Node(x);
			if(temp.head==NULL)
			{
				
				temp.head=p;
			}
			else
			{
				p->next=temp.head;
				temp.head->prev=p;
				temp.head=p;
			}
		}

int main()
{
	DLL source;
	create(source);
	show(source);
	int x;
	cout<<"Enter data to be added at beginning "<<endl;
	cin>>x;
	addatbeg(source,x);
	show(source);
}
