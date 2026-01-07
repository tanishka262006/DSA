//1.Scan a string from user.Find its length.
//Do not use string library functions.
#include<iostream>
using namespace std;
int main()
{
	char str[20];
	cout<<"Enter a string \n";
	cin.getline(str,20);
	int count=0;
	int i=0;
	while(str[i]!='\0')
	{
		count++;
		i++;
	}
	cout<<count;
	
}
