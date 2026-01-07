#include<iostream>
#include<string.h>
using namespace std;
int chpalindrome(char *s)
{
	int i=0,j;
	j=strlen(s)-1;
	while(i<j)
	{
		if(s[i]!=s[j])
		{
			return 0;
		
		}
		
		i++;
		j--;
		
	}
	return 1;
	
}
int main()
{
	char source[20];
	
	cout<<"Enter string to check palindrome :";
	cin.getline(source,20);
	int res=chpalindrome(source);
	if(res==1)
	{
		cout<<"palindrome ";
	}
	else
	{
		cout<<"not palindrome :";
	}
}
