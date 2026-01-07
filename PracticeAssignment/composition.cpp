#include<iostream>
using namespace std;
class Distance
{
	public:
		int km,mtr;
		Distance()
		{
			km=0;
			mtr=0;
		}
		Distance(int k,int m)
		{
			km=k;
			mtr=m;
		}
		void scan()
		{
			cout<<"enter km and mtr "<<endl;
			cin>>km>>mtr;
		}
//		~Distance()
//		{
//			cout<<"Object is destroyed "<<endl;
//		}
};
class Node
{
	public:
		Node *next;
		Distance data;
		Node()
		{
			next=NULL;
			
		}
		Node(Distance temp)
		{
			data=temp;
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
		void show();
		void scan();
		void addatend(Distance temp);
		void delatend();
		void addatbeg(Distance temp);	
};
void SLL:: delatend()
{
	if(head==NULL)
	{
		return;
	}
	else
	{
		Node *p=head;
		Node *q=head;
		while(p->next!=NULL)
		{
			q=p;
			p=p->next;
		}
		q->next=NULL;
		delete p;
	}
}
void SLL::show()
{
	Node *p=head;
	while(p!=NULL)
	{
		cout<<"data is "<<p->data.km<<" "<<p->data.mtr<<endl;
		p=p->next;
	}
}
void SLL::addatend(Distance temp)
{
	Node *p=new Node(temp);
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
void SLL::addatbeg(Distance temp)
{
	Node *p=new Node(temp);
	if(head==NULL)
	{
		head=p;
		return;
	}
	else
	{
		p->next=head;
		head=p;
	}
}
int main()
{
	SLL source;
	Distance dist;
	int i;
	for(i=0;i<5;i++)
	{
		dist.scan();
		source.addatend(dist);
	}
	dist.scan();
	cout<<"  "<<endl;
	source.addatbeg(dist);
	source.show();
	cout<<"  "<<endl;
	source.delatend();
	cout<<"  "<<endl;
	source.show();
}
