//Scan data for 2 students and print it.Draw stackframe.
#include<iostream>
using namespace std;
class Student
	{
		private:
			char *stdname;
			int *stdage;
			public:
			Student()
			{
				stdname=new char[20];
				stdage=new int();
			}
			void scan()
			{
				cout<<"Enter a string \n";
				cin.getline(stdname,20);
				cout<<"Enter an age \n";
				cin>>*stdage;
				cin.ignore(1);
			}
			void print()
			{
				cout<<"name is "<<stdname<<endl;
				cout<<"age is "<<*stdage<<endl;
			}
			~Student()
			{
				delete stdname;
				delete stdage;
//				cout<<*stdage<<endl;
//				cout<<stdname;
			}
	};
	int main()
	{
		Student std1,std2;
		std1.scan();
		std2.scan();
		std1.print();
		std2.print();
	}
	
	

