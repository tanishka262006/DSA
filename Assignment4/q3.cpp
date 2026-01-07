/*.Create a linkedlist of integers.Implement the following functions.
-create()
-show()
-search()
-count()
-addatbeg()
-addatend()
-addbypos()
-delatbeg()
-delatend()
-delbypos()
-sortasc()
-sortdesc()
After completing whole program,apply switch case.*/
#include<iostream>
using namespace std;
class Node
{
	public:
		int data;
		Node * next;
		Node()
		{
			data=0;
			next=NULL;
		}
		Node(int s)
		{
			data=s;
			next=NULL;	
		}
		~Node()
		{
			delete next;
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
		void create();
		void show();
		int search(int value);
		void addatbeg(int value);
		int count();
		void addatend(int value);
		void addbypos(int value,int pos);
		void delatbeg();
		void delatend();
		void delbypos(int pos);
	
};
void SLL::create()
{
	int n,x,i;
	cout<<"enter how many nodes you want ";
	cin>>n;
	if(n==0)
	{
		return;
	}
	cout<<"enter value ";
	cin>>x;
	Node *p;
	head=new Node(x);
	p=head;
	for(i=0;i<n-1;i++)
	{
		cout<<"enter value ";
		cin>>x;
		p->next=new Node(x);
		p=p->next;
	}
}
void SLL::show()
{
	Node *p=head;
	while(p!=NULL)
	{
		cout<<"data is "<<p->data<<endl;
		p=p->next;
	}
}
int SLL::search(int value)
{
	Node *p=head;
	while(p!=NULL)
	{
		if(p->data==value)
		{
			return 1;
		}
		p=p->next;	
	}
	return 0;
}
int SLL::count()
{
	Node *p=head;
	if(head==NULL)
	{
		cout<<"Empty list ";
	}
	int count=0;
	while(p!=NULL)
	{
		count++;
		p=p->next;
	}
	
	return count;
}
void SLL::addatbeg(int value)
{
	if(head==NULL)
	{
		head=new Node(value);
	}
	Node *p=new Node(value);
	Node *q=head;
	p->next=head;
	head=p;
}
void SLL::addatend(int value)
{
	if(head==NULL)
	{
		addatbeg(value);
	}
	Node *q=head;
	Node *p=new Node(value);
	while(q->next!=NULL)
	{
		q=q->next;
	}
	q->next=p;

}
void SLL::addbypos(int value,int pos)
{
	if(pos<1 || pos>count()+1)
	{
		cout<<"Invalid position "<<endl;
	}
	if(head==NULL)
	{
		addatbeg(value);
	}
	Node *p=new Node(value);
	Node *q=head;
	for(int i=1;i<pos-1;i++)
	{
		q=q->next;
	}
	p->next=q->next;
	q->next=p;		
}
void SLL::delatbeg()
{
	if(head==NULL)
	{
		cout<<"empty list ";
	}
	else if(head->next==NULL)
	{
		Node *p=head;
		head=NULL;
		delete p;
	}
	Node *p=head;
	head=head->next;
	delete p;
}
void SLL::delatend()
{
	if(head==NULL)
	{
		cout<<"empty list "<<endl;
	}
	if(head->next==NULL)
	{
		delatbeg();
	}
	Node *p=head;
	Node *q=head;
//	while(count()-1)
//	{
//		p=p->next;
//	}
	while(q->next!=NULL)
	{
		p=q;
		q=q->next;
	}
	p->next=NULL;
	delete q;
	
}
void SLL::delbypos(int pos)
{
	if(head==NULL)
	{
		cout<<"Empty list "<<endl;
	}
	if(pos<1 || pos>count())
	{
		cout<<"Invalid postion "<<endl;
		return ;
	}
	else if(pos>=1 || pos<=count())
	{
		Node *p,*q;
		int i;
		q=head;
		p=head;
		for(i=0;i<pos-1;i++)
		{
			q=p;
			p=p->next;
		}
		
		q->next=p->next;
		delete p;		
	}
	
}
int main()
{
	SLL list1;
	int choice;
	while(1)
	{
		cout<<"ENter choice ";
cout<<"1-create()\n";
cout<<"2-show()\n";
cout<<"3-search()\n";
cout<<"4-count()\n";
cout<<"5-addatbeg()\n";
cout<<"6-addatend()\n";
cout<<"7-addbypos()\n";
cout<<"8-delatbeg()\n";
cout<<"9-delbyend()\n";
cout<<"10-delbypos()\n";
cout<<"11-sortasc()\n";
cout<<"12-sortdesc()";
	cin>>choice;
	int val;
	switch(choice)
	{
		case 1:
			list1.create();
			list1.show();
			break;	
	
		case 2:
			{
				cout<<"enter value to find ";
	cin>>val;
	int res=list1.search(val);
	if(res==1)
	{
		cout<<"yess!! found ";
		
	}
	else
	{
		cout<<"Not found "<<endl;
	}
	break;
			}
		case 3:
			cout<<"value to be added ";
 	cin>>val;
	list1.addatbeg(val);
	list1.show();
	break;

	case 4:
		list1.count();break;
	case 6:
		cout<<"Enter value to be add at end ";
	cin>>val;
	list1.addatend(val);
	list1.show();
	break;
	case 7:
		int pos;
	cout<<"enter the position where you wanted to add data ";
	cin>>pos;
	cout<<"Enter value to be added at position "<<pos<<endl;
	cin>>val;
	list1.addbypos(val,pos);
	list1.show();
	break;
	case 7:
		
}
		
	}

 	
	
	

//	
	list1.delatbeg();
	cout<<"after delete at beginning code is "<<endl;
	list1.show();
	list1.delatend();
	cout<<"after delete at end data is "<<endl;
	list1.show();
	int pos;
	cout<<"Enter position to be deleted "<<endl;
	cin>>pos;
	list1.delbypos(pos);
	cout<<"after del by pos ";
	list1.show();
	
}

