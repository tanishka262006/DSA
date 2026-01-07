//Define recursive copy to copy one string into another.
#include<iostream>
using namespace std;
void copystr(char *t,char *s)
{
	if(*s=='\0')
	{
		return;
	}
	else
	{
		*t=*s;
		copystr(t+1,s+1);
	}
}
int main()
{
	char source[20];
	char target[20];
	cout<<"Enter a string "<<endl;
	cin.getline(source,20);
	copystr(target,source);
	cout<<target;
}
