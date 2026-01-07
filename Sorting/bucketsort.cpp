#include<iostream>
#include<stdlib.h>
#define MAX 5
#include<time.h>
using namespace std;
void bucketsort(int *num)
{
	int max=num[0];
	for(int i=0;i<MAX;i++)
	{
		if(num[i]>max)
		{
			max=num[i];
		}
	}
	cout<<"max element :"<<max<<endl;
	int *frequency=new int[max+1];
	for(int i=0;i<max+1;i++)
	{
		frequency[i]=0;
	}
	
	for(int i=0;i<MAX;i++)
	{
		frequency[num[i]]=frequency[num[i]]+1;	
	}
	int k=0;
	for(int i=0;i<=max;i++)
	{
		while(frequency[i]!=0)
		{
			num[k]=i;
			frequency[i]--;
			k++;
		
		}
	}

}
int main()
{
	int *num=new int [MAX];
	
	srand(time(NULL));
	for(int i=0;i<MAX;i++)
	{
		num[i]=rand()%100;
	}
	
	bucketsort(num);
	cout<<"Afer sorting :";
	for(int i=0;i<MAX;i++)
	{
		cout<<num[i]<<" ";
	}
	
}
