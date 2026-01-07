/*6.Scan 7 characters in an array of characters.Count how many times 'A' is present in the array.

*/
#include<iostream>
using namespace std;
int main()
{
	char arr[7];
	int i;
	int count=0;
	for(i=0;i<7;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<7;i++)
	{
		if(arr[i]=='A')
		{
			count++;
		}
	}
	cout<<"A appears "<<count<<"times ";
	

}


