#include<iostream>
using namespace std;
int main()
{
	char name[20];
	
	//Scan name of employee here and find its length.	
	//Do not use library function strlen()
	cin.getline(name,20);
	int count=0;
	while(name[count]!='\0')
	{
		count++;
	}
	cout<<count;
	
}

