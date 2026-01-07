//Q6.Create a database of 6 students containing name, age, birth date, admission date.
//Print all data.Use composition.
#include<iostream>
using namespace std;
class Date
{
	public:
		int day,mon,year;
		void scandate()
		{
			cin>>day>>mon>>year;
		}
		void printdate()
		{
			cout<<day<<" "<<mon<<" "<<year<<endl;
		}
};
class Student
{
	public:
		char stdname[30];
		int age;
		Date birthdate;
		Date admdate;		
		void scan()
		{
			cout<<"Enter name of student "<<endl;
			cin.getline(stdname,30);
			cout<<"Enter age of student "<<endl;
			cin>>age;
			
			cout<<"Enter birthdate of student "<<endl;
			birthdate.scandate();
			cout<<"Enter admission date of student "<<endl;
			admdate.scandate();
			cin.ignore(1);
		}	
		void print()
		{
			cout<<"---------------------------------------------------- "<<endl;
			cout<<"Name of student "<<endl;
			cout<<stdname<<endl;
			cout<<"Age of student "<<endl;
			cout<<age<<endl;
			cout<<"Birthdate of student "<<endl;
			birthdate.printdate();
			cout<<"Admission date of student "<<endl;
			admdate.printdate();
			cout<<"---------------------------------------------------- "<<endl;
		}
};
int main()
{
	Student std[6];
	for(int i=0;i<6;i++)
	{
		std[i].scan();
	}
	for(int i=0;i<6;i++)
	{
		std[i].print();
	}
	
	
	
	
	
	
	
}
