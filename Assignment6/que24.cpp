//Scan a string from user.Replace every uppercase alphabet by its lowercase version.
//Print total replacements your program has done.
#include<iostream>
using namespace std;
int count(char *s)
{
	if(*s=='\0')
	{
		return 0;
	}
	else
	{
		int c;
		c=count(s+1);
		if(*s>='A' && *s<='Z')
		{
			*s=*s+32;
			c=c+1;
		}
		return c;
	}
}
int main()
{
	char str[20];
	cout<<"Enter a string "<<endl;
	cin.getline(str,20);
	int c=count(str);
	cout<<c<<" replacements are done "<<endl;
	cout<<str;
}
