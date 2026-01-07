//6.Scan data for 2 Students and print it.Do not define any member function.
//	Whole code is to be written in main() only.
//	Draw stackframe also and check if your program creates any memory leak.			
//	Draw stackframe.
#include<iostream>
using namespace std;
	class Student
	{
		public:
			char *stdname;
			int age;
			Student()
			{
				stdname=new char[20];
				age=0;
			}
			~Student()
			{
				delete stdname;
				
			}
	};
	int main()
	{
		Student std1,std2;
		
		cout<<"Enter a name of student \n";
		cin.getline(std1.stdname,20);
		cout<<"Enter a name of student \n";
		cin.getline(std2.stdname,20);
		cout<<"Enter age of student \n";
		cin>>std1.age;
		cout<<"Enter age of student \n";
		cin>>std2.age;
		cout<<"name of student 1 is "<<std1.stdname<<endl;
		cout<<"name of student 2 is "<<std2.stdname<<endl;
		cout<<"age of student 1 is "<<std1.age<<endl;
		cout<<"age of student 2 is "<<std2.age<<endl;
		
		
	}
	


