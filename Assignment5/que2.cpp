//2.Scan 2 strings from user.Check if they are equal or not.
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str1[20];
	char str2[20];
	cout<<"Enter a string \n";
	cin.getline(str1,20);
	cout<<"Enter a string \n";
	cin.getline(str2,20);
	int flag=0;
	if(strcmp(str1,str2)==0)
	{
		cout<<"equal \n";
		flag=1;
		
	}
	else
	{
		cout<<"Not equal \n";
		flag=0;
	}
	cout<<flag;
	
	
}
