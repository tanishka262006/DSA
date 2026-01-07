//Q5.Scan 2 strings from user.Compare them to check if they are equal or not.(use library function)
#include<iostream>

using namespace std;
int main()
{
	string str1,str2;
	getline(cin,str1);
	getline(cin,str2);
//	int res=strcmp(str1,str2);
	if(str1==str2)
	{
		cout<<"strings are eqaual ";
	}
	else
	{
		cout<<"strings are not equal ";
	}
	
}
