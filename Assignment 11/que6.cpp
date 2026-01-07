/*Create a doubly linked list of student(rollno,name,age,hometown).Implement following functions.
-add new student in list
-delete student by name
-count all students
-count students belonging to specific hometown where hometown should be input from user.
-search student by name
-update student*/
#include<iostream>
using namespace std;
class Student
{
	public:
		char name[20];
		int roll_no;
		int age;
		char hometown[20];
		Student()
		{
			roll_no=0;
			age=0;
			name=new char[20];
			hometown=new char[20];	
		}
//		Student(Student temp)
//		{
//			strcpy(name,temp.name);
//			strcpy(hometown,temp.hometown);
//		}
		void scan()
		{
			cout<<"enter name of student :";
			cin.getline(name,20);
			cout<<"Enter age of student :";
			cin>>age;
			cout<<"enter hometown of student :";
			cin.getline(hometown,20);
			cout<<"Enter roll number of student ";
			cin>>age;
		}
		void print()
		{
			cout<<"name is :"<<name<<endl;
			cout<<"age is "<<age<<endl;
			cout<<"hometown is :"<<hometown<<endl;
			cout<<"roll number is :"<<roll_no<<endl;
		}
		
};
class Node
{
	public:
		Student std;
		Node *next;
		Node *prev;
		Node()
		{
			prev=NULL;
			next=NULL;
		}
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
		void addatend(Student temp)
		{
			Node *p=new Node(temp);
			if(empty())
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
				p->prev=q;

			}
		}
		int count()
		{
			if(head==NULL)
			{
				return 0;
			}
			else
			{
				int count=0;
				Node *p=head;
				while(p!=NULL)
				{
					count++;
					p=p->next;
				}
				return count;
			}
		}
		void update(Student temp)
		{
			
		}
		int search(char *s)
		{
			if(empty())
			{
				return 0;
			}
			Node *p=head;
			while(p!=NULL)
			{
				if(strcmp(s,p->std.name)==0)
				{
					return 1;
				}
			}
			
			
		return 0;
			
		}
		void show()
		{
			if(empty())
			{
				return 0;
			}
		}
};
int main()
{
	DLL source;
	Student temp;
	
}
