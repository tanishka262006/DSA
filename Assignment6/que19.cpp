//Scan a string from user.Find its length.
#include<iostream>
using namespace std;
int findlen(char *p)
{
	if(*p=='\0')
	{
		return 0;
	}
	else
	{
		int c;
		c=findlen(p+1);
		return c+1;
	}
}
int main()
{
	char str[20];
	cout<<"Enter a string "<<endl;
	cin.getline(str,20);
	int len=findlen(str);
	cout<<"Length of string is "<<len<<endl;
}
