#include<iostream>
using namespace std;
class Date
{
	public:
		int day,mon,year;
		void scan()
		{
			cout<<"enter day month and year respectively "<<endl;
			cin>>day>>mon>>year;
			
		}
		void print()
		{
			cout<<day<<"/"<<mon<<"/"<<year<<endl;
		}
	//your member functions if any(optional)
};
//Create an SLL of 6 different dates.
//Print all dates in SLL.
//Search a specific date in SLL.
//Print all dates belonging to specific month number.
class Node{
	public:
		Date d;
		Node *next;
		Node()
		{
			
			next=NULL;
		}
		Node(Date da)
		{
			d=da;
			next=NULL;
		}
		printmon(char month)
		{
			if()
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
};
void SLL::create()
{
	cout<<"Enter date "<<endl;
	Date da;
	da.scan();
	head=new Node(da);
	Node *p=head;
	for(int i=0;i<2;i++)
	{
		da.scan();
		p->next=new Node(da);
		p=p->next;
	}
	
}
void SLL::show()
{
	if(head==NULL)
	{
		return;
	}
	Node *p=head;
	while(p!=NULL)
	{
		p->d.print();
		p=p->next;
	}
}
int main()
{
	SLL source;
	source.create();
	source.show();
}
