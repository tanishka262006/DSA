//Q4.Create an array of 6 students(student name, student age).Sort this array in ascending order by name.
//All data members must be private.(You can try with public also)
#include<iostream>
#include<string.h>
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
		char *toLower(char *p)
		{
			while(*p!='\0')
			{
				if(*p>='A' && *p<='Z')
				{
					*p=*p+32;
				}
				p++;
			}
			return p;
		}
		void create()
		{
			
				cout<<"Enter name of students "<<endl;
				cin.getline(stdname,20);
				toLower(stdname);
				cout<<"Enter age of students "<<endl;
				cin>>age;
				cin.ignore(1);	
		}
		void show()
		{
			cout<<"Name is "<<stdname<<endl;
			cout<<"Age is "<<age<<endl;
		}
};

int main()
{
	Student std[2];
	int i,j;
	for(i=0;i<2;i++)
	{
		std[i].create();
		
	}
	for(int i=0;i<2;i++)
	{
		for(int j=i+1;j<2;j++)
		{
			if(strcmp(std[i].stdname,std[j].stdname)>0)
			{
				Student temp;
				temp=std[i];
				std[i]=std[j];
				std[j]=temp;
			}
		}
	}
	for(i=0;i<2;i++)
	{
		std[i].show();
	}
}	
		
		
	
	


