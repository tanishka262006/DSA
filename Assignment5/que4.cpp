//4.Scan a string from user.Define your own function to convert whole string into uppercase format.
// 	input = "Today is 15 Aughust 2025"
//	output = "TODAY IS 15 AUGUST 2025"
#include<iostream>
using namespace std;
int main()
{
	char str[20];
	cout<<"Enter a string \n";
	cin.getline(str,20);
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]>=92 && str[i]<=122)
		{
			str[i]=str[i]-32;
		}
		i++;
	}
	cout<<str;
}

