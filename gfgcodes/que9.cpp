/*Try following program with composition.
Second year Computer Engineering class, set A of students like Vanilla Ice-cream and set
B of students like butterscotch ice-cream. Write C++ program to store two sets using
linked list. compute and display
a) Set of students who like both vanilla and butterscotch.
b) Set of students who like either vanilla or butterscotch.
c) Number of students who like neither vanilla nor butterscotch.
d) Remove those from both lists who like both and create their separate list.
e) Delete all lists when you are done with program.
Store PRN number and Name of Student.*/
#include<iostream>
#include<string.h>
using namespace std;
class Student 
{
	public:
		string name;
		string prn;
		
		void scan()
		{
			cout<<"Enter name of student :";
			cin>>name;
			cout<<"Enter prn number :";
			cin>>prn;
		}
		void print()
		{
			cout<<"\nName is : "<<name;
			cout<<"\nPRN  is :"<<prn;
		}
		
};
class Node
{
	public:
		Student std;
		Node *next;
		Node *prev;
		Node(Student temp)
		{
			std=temp;
			prev=NULL;
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
				
					p->std.print();
					cout<<"\n------------------------------ "<<endl;
					p=p->next;
				}
			}
		}
		void addatend(Student std)
		{
			Node *q=new Node(std);
			if(head==NULL)
			{
				head=q;
			return;
			}
			Node *p=head;
			while(p->next!=NULL)
			{
				p=p->next;
			}
			p->next=q;
			q->prev=p;
		}

		void Makeempty()
		{
			if(head==NULL)
			{
				return;
			}
			else if(head->next==NULL)
			{
				Node *p=head;
				delete head;	
			}
			else
			{
				Node *p=head;
				while(p!=NULL)
				{
					Node *temp=p;
					p=p->next;
					delete temp;
				}
				head=NULL;
			}
		}
//		int both()
//		{
//			int c=0;
//			Node *p=head;
//			if(head==NULL)
//			{
//				return c;
//			}
//			else
//			{
//				
//				while(p!=NULL)
//				{
//					c++;
//					p=p->next;
//				}
//			}
//			return c;
//		}
		int countnoany()
		{
			if(head==NULL)
			{
				return 0;
			}
			int c=0;
			Node *p=head;
			while(p!=NULL)
			{
				c++;
				p=p->next;
			}
			return c;
		}
		void anyone(DLL butter,DLL &anyo)
		{
			Node *p=head,*q=butter.head;
			if(p==NULL && q==NULL)
			{
				return;
			}
			else
			{
				for(p=head;p!=NULL;p=p->next)
				{
					for(q=head;q!=NULL;q=q->next)
					{
						if(p->std.prn!=q->std.prn)
						{
							anyo.addatend(p->std);
							anyo.addatend(q->std);
						}
					}
				}
			}
		}
		void both(DLL & both,DLL butter)
		{
			Node *p=head,*q=butter.head;
			if(p==NULL && q==NULL)
			{
				return;
			}
			for(p=head;p!=NULL;p=p->next)
			{
				for(q=butter.head;q!=NULL;q=q->next)
				{
					if(p->std.prn==q->std.prn)
					{
						both.addatend(p->std);
					}
					
				}
			}
		}
};
int main()
{
	DLL vanilla,butterscotch;
	int choice;
	DLL anyone,noone,both;
	Student std;


			while(1)
			{
				Student std;
				std.scan();
				if(std.name=="STOP")
				{
					break;
				}
				cout<<"Enter 1 for vanilla "<<endl;
				cout<<"Enter 2 for butterscotch "<<endl;
				cout<<"Enter 3 for both "<<endl;
				cout<<"Enter 4 for nothing "<<endl;
				cout<<"Enter 5 for exit "<<endl;
				cin>>choice;
				switch(choice)
				{
					case 1:
						vanilla.addatend(std);
						break;
					case 2:
						butterscotch.addatend(std);
						break;
					case 3:
						vanilla.addatend(std);
						butterscotch.addatend(std);
						break;
					case 4:
						noone.addatend(std);
						break;
					case 5:
						exit(0);	
				}
		
			}
			while(1)
			{
				cout<<"\nEnter 1 for Displaying vanilla lovers :";
				cout<<"\nEnter 2 for Displaying butterscotch lovers :";
				cout<<"\nEnter 3 for Displaying vanilla as well as butterscotch lovers :";
				cout<<"\nEnter 4 for Displaying either vanilla or butterscotch lovers :";
				cout<<"\nEnter 5 for Displaying neither vanilla nor butterscotch lovers";
				
				cout<<"Enter choice :";
				cin>>choice;
				switch(choice)
				{
					case 1:
						vanilla.show();
						break;
					case 2:
						butterscotch.show();
						break;
					case 3:
						both.Makeempty(); 
						vanilla.both(both,butterscotch);
						both.show();
						break;
					case 4:
						
						vanilla.anyone(butterscotch,anyone);
						anyone.show();
						break;
					case 5:
						noone.show();
						break;
						
				}
				
			}
	
		cout<<"no any icecream liked :"<<noone.countnoany();
		vanilla.Makeempty();
		vanilla.show();
		butterscotch.Makeempty();
		anyone.Makeempty();
		
	
}

