//Q5.Create a database of 6 students containing name,age,birth date,admission date.
//Print all data.Do not use composition.
#include<iostream>
using namespace std;
class Student
{
	public:
		char stdname[30];
		int age;
		int bday,bmon,byear;
		int admday,admmon,admyear;		
		void scan()
		{
			cout<<"Enter name of student "<<endl;
			cin.getline(stdname,30);
			cout<<"Enter age of student "<<endl;
			cin>>age;
			
			cout<<"Enter birthdate of student "<<endl;
			cin>>bday>>bmon>>byear;
			cout<<"Enter admission date of student "<<endl;
			cin>>admday>>admmon>>admyear;
			cin.ignore(1);
		}	
		void print()
		{
			cout<<"name of student "<<endl;
			cout<<stdname<<endl;
			cout<<"age of student "<<endl;
			cout<<age<<endl;
			
			cout<<"birthdate of student "<<endl;
			cout<<" "<<bday<<" "<<bmon<<" "<<byear<<endl;
			cout<<"admission date of student "<<endl;
			cout<<" "<<admday<<" "<<admmon<<" "<<admyear<<endl;
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

