//class Employee(name,birthdate,joining date,company_name).Create a database of 6 employees.
//Print all database.Use of composition expected here.
#include<iostream>
using namespace std;
class Date
{
	public:
		int day,mon,year;
		void scandate()
		{
			cout<<"Enter date "<<endl;
			cin>>day>>mon>>year;
		}
		void printdate()
		{
			cout<<day<< "\ "<<mon<<" \ "<<year<<" "<<endl;
		}
};
class Employee
{
	public:
		char name[20];
		Date bdate;
		Date jdate;
		char cmpname[20];
		void scan()
		{
			cout<<"Enter name of company "<<endl
			cin.getline(name,20);
		}
		void print()
		{
			
		}
};
int main()
{
	Employee emp[6];
	for(int i=0;i<6;i++)
	{
		emp[i].scan();
	}
	for(int i=0;i<6;i++)
	{
		
	}
}
