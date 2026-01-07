#include<iostream>
using namespace std;
class Node
{
	public:
		int data;
		Node *next;
		Node(int a)
		{
			data=a;
			next=NULL;
		}
		Node()
		{
			data=0;
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
		void addatend(int x)
		{
			Node *p=new Node(x);
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
			}
		}
		void sort()
		{
			int *temp=new int[3];
			for(int i=0;i<3;i++)
			{
				temp[i]=0;
			}
			if(head==NULL)
			{
				return;
			}
			Node *p=head;
			while(p!=NULL)
			{
				if(p->data==0)
				{
					temp[0]++;
				}
				if(p->data==1)
				{
					temp[1]++;
				}
				if(p->data==2)
				{
					temp[2]++;
				}
				p=p->next;
			}
			p=head;
			int k=0;
			while(p!=NULL)
			{
				if(temp[k] == 0) 
				{
					k++;
				}
           		else
           		{
       				p->data=k;
					temp[k]--;
					p=p->next;
				}
		
			}
		}
		void show()
		{
			if(head==NULL)
			{
				return;
			}
			else
			{
				Node *p=head;
				while(p!=NULL)
				{
					cout<<"data is :"<<p->data<<" ";
					p=p->next;
				}
			}
		}
};
int main()
{
	SLL source;
	source.addatend(2);
	source.addatend(1);
	source.addatend(0);
	source.addatend(2);
	source.addatend(0);
	source.addatend(2);
	source.addatend(1);
	source.show();
	source.sort();
	cout<<"\nAfter sorting :";
	source.show();
}

