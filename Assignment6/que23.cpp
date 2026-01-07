//23.Scan a string from user.Count number of words in a string.
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
		int res;
		res=count(s+1);
		if(*s==' ')
		{
			res=res+1;
		}
		return res;
	}
}
int main()
{
	char str[20];
	cout<<"Enter a string "<<endl;
	cin.getline(str,20);
	int c=count(str);
	cout<<"Number of words are "<<c+1;	
}
