//Q2.Scan 6 citynames from user. Sort them in ascending order.
#include<iostream>
#include<string.h>
using namespace std;
void toLower(char *p)
{
	while(*p!='\0')
	{
		if(*p >= 'A' && *p <= 'Z') 
		{
			*p=*p+32;
		}
		p++;
	}
	
}
int main()
{
	char city[6][20];
	int i;
	char temp[20];
	for(i=1;i<=6;i++)
	{
		cout<<"Enter city name "<<endl;
		cin.getline(city[i],20);
	}
	for(i=1;i<=6;i++)
	{
		
		toLower(city[i]);
	}
	for(i=1;i<=6;i++)
	{
		for(int j=i+1;j<=6;j++)
		{
			if(strcmp(city[i],city[j])>0)
			{
				strcpy(temp,city[i]);
				strcpy(city[i],city[j]);
				strcpy(city[j],temp);
				
			}
		}
	}
	for(i=1;i<=6;i++)
	{
		cout<<" city name "<<city[i]<<endl;
		//cin.getline(&city[i][0],20);
	}
	
}
