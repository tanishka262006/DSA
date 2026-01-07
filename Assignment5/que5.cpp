//5.Scan data for 2 Students and print it.Use of constructor and destructor is expected.
//	Draw stackframe also and check if your program creates any memory leak.
#include<iostream>
using namespace std;
class Student
	{
		public:
			char stdname[30];
			int age;
			Student()
			{
				
				cout<<"\nEnter a name of student \n";
				
				cin.getline(stdname,30);
			
				cout<<"\nEnter age of student \n";
				cin>>age;
					cin.ignore(1);
				
			}
			~Student()
			{
				cout<<"\nname is "<<stdname<<endl;
				cout<<"age is "<<age;
			}
	};
int main()
{
	Student std1,std2;
	

	
}
	
	
	


