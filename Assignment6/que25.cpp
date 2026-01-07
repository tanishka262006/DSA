//25.Scan a string from user in uppercase format only.
//Count how many alphabets are used in string.
#include<iostream>
using namespace std;
void convert(char *s)
{
	cout<<"Enter a string "<<endl;
	cin.getline(s,20);
	if(*s>='a' && *s<='z')
	{
		return;
	}
	else
	{
		convert(s+1);
	}
	
}
int main()
{
	char str[20];
	
	convert(str);
	cout<<str;
}
