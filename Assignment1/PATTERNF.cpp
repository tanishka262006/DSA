/*
F.
    1
   121
  12321
 1234321
123454321
*/
#include<iostream>
using namespace std;
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=5;j>=i;j--)
		{
			cout<<" ";
		}
		for(j=1;j<=i;j++)
		{
			cout<<j;
		}
		for(j = i - 1; j >= 1; j--) 
		{
            cout << j;
        }
		cout<<endl;
	}

}


