//WAP to check if given string is pallindrome or not.
#include<iostream>
#include<string.h>
using namespace std;
int checkpali(char *s)
{
	if(*s=='\0')
	{
		return 0;
	}
	else
	{
		
		int res=checkpali(s+1);
		if(*s==strlen(s)-1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
		return 0;
	}
}
int main()
{
	char str1[20];
	cout<<"Enter a string "<<endl;
	cin.getline(str1,20);
	int res=checkpali(str1);
	if(res==1)
	{
		cout<<"palindrome "<<endl;
	}
	else
	{
		cout<<"not palindrome "<<endl;
	}
	
}
