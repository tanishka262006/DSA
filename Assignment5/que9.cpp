
//For above class Student,create an array of 6 students.
//	Print all the students whose name starts with 'A' or 'a'.
#include<iostream>
using namespace std;
class Student
	{
		public:
			char stdname[30];
			int age;
			Student()
			{
				age=0;
			}
			int search()
			{
				if(stdname[0]=='a' ||stdname[0]=='A' )
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			void scan()
			{
				cout<<"Enter a name of student \n";
				cin.getline(stdname,30);
				cout<<"Enter an age of student \n";
				cin>>age;
				cin.ignore(1);
			}
			void print()
			{
				cout<<"Name is "<<stdname<<endl;
				cout<<"Age is "<<age<<endl;
			}
	};
	
	
int main()
{
	int i;
	Student std[6];
	for(i=0;i<6;i++)
	{
		std[i].scan();
	}
	int res=0;
	for(i=0;i<6;i++)
	{
		res=std[i].search();
			if(res==1)
			{
				std[i].print();
			}
	}
	
	
	
}
