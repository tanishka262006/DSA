/*
----E
---DE
--CDE
-BCDE
ABCDE
*/
#include<iostream>
using namespace std;
int main()
{
	char i,j;
	for(i='E';i>='A';i--)
	{
		for(j=i;j>='A';j--)
		{
			cout<<" ";
		}
		for(j=i;j<='E';j++)
		{
			cout<<j;
		}
		cout<<endl;
	}
	
}


