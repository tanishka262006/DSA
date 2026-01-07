/*Create a linkedlist of students containing name,age and hometown.Define following functions to 
work with this list.
-add new student(always at the end)
-search student by name
-search students by hometown
-delete student by name
-delete all the students belonging to specific hometown.
-sort list by name
-sort list by age
(here we will use composition method)
*/
#include<iostream>
#include<string.h>
using namespace std;
class Student
{
	public:
		string name;
		int age;
		string hometown;
		void scan()
		{
			cout<<"Enter name of student :";
			cin>>name;
			cout<<"Enter age of student :";
			cin>>age;
			cout<<"Enter hometown of student :";
			cin>>hometown;
			
		}
		void print()
		{
			cout<<"\n name of student : "<<name;
			
			cout<<"\n age of student : "<<age;
			
			cout<<"\nhometown of student : "<<hometown;
			
		}
		
};
class Node
{
	public:
		Student std;
		Node *next;
		Node *prev;
		Node(Student std)
		{
			this->std=std;
			next=NULL;
			prev=NULL;
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
		int searchbyname(string n)
		{
			if(head==NULL)
			{
				return 0;
			}
			Node *p=head;
			while(p!=NULL)
			{
				if(p->std.name==n)
				{
					return 1;
				}
				p=p->next;
			}
			return 0;
		}
		void delbyname(string n)
		{
			if(head==NULL)
			{
				return;
			}
			Node *p=head;
			Node *q=head;
			while(p!=NULL)
			{
				
				if(p->std.name==n)
				{
					p->prev->next=p->next;
					q=p;
					delete q;
				}
				p=p->next;
			}
			show();
		}
		int searchbyhometown(string n)
		{
			if(head==NULL)
			{
				return 0;
			}
			Node *p=head;
			while(p!=NULL)
			{
				if(p->std.hometown==n)
				{
					return 1;
				}
				p=p->next;
			}
			return 0;
		}
		void addatend(Student temp)
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
		void sortname()
		{
			Node *p,*q;
			for(p=head;p!=NULL;p=p->next)
			{
				for(q=p->next;q!=NULL;q=q->next)
				{
					if((p->std.name>q->std.name))
					{
						swap(p->std,q->std);
					}
				}
			}
		}
		void sortage()
		{
			Node *p,*q;
			for(p=head;p!=NULL;p=p->next)
			{
				for(q=p->next;q!=NULL;q=q->next)
				{
					if(p->std.age>q->std.age)
					{
						swap(p->std,q->std);
					}
				}
			}
		}
		void show()
		{
			Node *p=head;
			if(p==NULL)
			{
				return;
			}
			else
			{
				while(p!=NULL)
				{
					cout<<"data is :";
					p->std.print();
					p=p->next;
					
				}
			}
		}
};
int main()
{
	DLL source;
	int choice;
	int x;
	while(1)
		{
			Student std;
		
			if(std.name=="STOP")
			{
				break;
			}
			cout<<"\nEnter 2 for show list "<<endl;
			cout<<"\nEnter 3 for search by name "<<endl;
			cout<<"\nEnter 4 search by hometown "<<endl;
			cout<<"\nEnter 1 add new student(always at the end): ";
			cout<<"\nEnter 7 delete student by name: ";
			cout<<"\nEnter 5 to sort the list by age : ";
			cout<<"\nEnter 6 to sort the list by name : ";

			cout<<"Enter 7 for exit "<<endl;
			cin>>choice;
			switch(choice)
			{
				case 1:
						std.scan();
					source.addatend(std);
					break;
				case 2:
					source.show();
					break;
				case 5:
					source.sortage();
					break;
				case 4:
					x=source.searchbyhometown("pune");
					if(x==1)
					{
						cout<<"found ";
					}
					else
					{
						cout<<"not found:";
					}
					break;
				case 3:
				{
					
					string str;
				cout << "Enter name to search: ";
                cin >> str;
                if (source.searchbyname(str)) cout << "Found\n";
                else cout << "Not found\n";
                break;
            	}
                case 6:
                	source.sortname();
                	break;
                case 7:
                	exit(0);
			}
	
		}
}

