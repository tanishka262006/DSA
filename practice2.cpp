#include<iostream>
using namespace std;

class Node
{
	public :
		int data;
		Node *next;
		
		Node()
		{
			data=0;
			next=NULL;	
		}
		Node(int a)
		{
			data = a;
			next=NULL;
		}
		~Node()
		{
			cout<<"Destructor";
		}
};

class SLL
{
	private : 
		Node *head;
		
	public :
		SLL()
		{
			head=NULL;
		}
		
		void create();
		void show();
		int count();
		int search(int value);
		void addatbeg(int value);
		void addatend(int value);
		void addbypos(int pos,int value);
		void deleteatbeg();
		void deleteatend();
		void deletebypos(int pos);
};

int main()
{
	SLL list;
	int ch,pos,value,count,num;//declare all variable here only
	
	do
	{
		cout<<"Enter Your Choice from : "<<endl;
		cout<<"1.Create a list "<<endl;
		cout<<"2.Show list"<<endl;
		cout<<"3.Count Element"<<endl;
		cout<<"4.Search Element"<<endl;
		cout<<"5.Add at Beggining "<<endl;
		cout<<"6.Add at End "<<endl;
		cout<<"7.Add at any Position  "<<endl;	
		cout<<"8.Delete at Beggining "<<endl;
		cout<<"9.Delete at End "<<endl;
		cout<<"10.Delete at any Position "<<endl;
		cout<<"11.Exit"<<endl;
		cin>>ch;
		
		switch(ch)
		{
			case 1 :
				list.create();
				break;
				
			case 2 :
				list.show();
				break;
				
			case 3 :
				count=list.count();
				cout<<"Count : "<<count<<endl;
				break;
				
			case 4 :
				cout<<"Enter Value to be searched :  ";
				cin>>value;
				num=list.search(value);
				if(num==1)
				{
					cout<<"Found"<<endl;
				}
				else
				{
					cout<<"Not Found"<<endl;
				}
				break;
				
			case 5 :
				cout<<"Enter Value to be Added : ";
				cin>>value;
				list.addatbeg(value);
				break;
				
			case 6 :
				cout<<"Enter Value to be Added : ";
				cin>>value;
				list.addatend(value);
				break;
				
			case 7 :
				cout<<"Enter Value and Position to be Added : ";
				cin>>value>>pos;
				list.addbypos(pos,value);
				break;
				
			case 8 : 
				list.deleteatbeg();
				break;
				
			case 9 :
				list.deleteatend();
				break;
				
			case 10 :
				cout<<"Enter Position : ";
				cin>>pos;
				list.deletebypos(pos);
				break;
				
			case 11 :
				break;
		}
	}while(ch!=11);
}

void SLL::create()
{
	int n;
	cout<<"Enter Number of Nodes : ";
	cin>>n;
	if(n==0)
	{
		return ;
	}
	int x;
	cout<<"Enter Value : ";
	cin>>x;
	head=new Node(x);
	Node *p=head;
	int i;
	for(i=1;i<=n-1;i++)
	{
		cout<<"Enter Value : ";
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
		cout<<p->data<<endl;
		p=p->next;
	}
}

int SLL::count()
{
	Node *p=head;
	int count=0;
	
	while(p!=NULL)
	{
		count++;
		p=p->next;
	}
	
	return count;
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

void SLL::addatbeg(int value)
{
	Node *p;
	p=new Node(value);
	
	if(head==NULL)
	{
		head=p;
	}
	else
	{
		p->next=head;
		head=p;
	}
}

void SLL::addatend(int value)
{
	Node *p=new Node(value);
	
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

void SLL::addbypos(int pos,int value)
{
	if(pos==1)
	{
		addatbeg(value);
	}
	else
	{
		Node *q=new Node(value);
		Node *p=head;
		int i;
		for(i=0;i<pos-1;i++)
		{
			p=p->next;
		}
		q->next=p->next;
		p->next=q;
	}
}

void SLL::deleteatbeg()
{
	if(head==NULL)
	{
		cout<<"Empty List"<<endl;
	}
	else
	{
		Node *p=head;
        head=head->next;
		delete p;
		// head=p;
	}
}

void SLL::deleteatend()
{
	if(head==NULL)
	{
		cout<<"Empty List"<<endl;
	}
	else if(head->next == NULL)
	{
		delete head;
		head = NULL;
	}
	else
	{
		Node *p=head,*q;
		q=NULL;
		while(p->next!=NULL)
		{
			q=p;
			p=p->next;
		}
		q->next=NULL;
		delete p;
	}
}

void SLL::deletebypos(int pos)
{
	int i;
	int c=count();
	
	if(c==0)
	{
		deleteatbeg();
	}
	else
	{
		Node *p=head;
		Node *q=NULL;
		for(i=0;i<pos-1;i++)
		{
			q=p;
			p=p->next;
		}
		p->next=q->next;
		delete p;
	}
}