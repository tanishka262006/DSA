//3.Print all integers from 10 to 20 in reverse order
//for following main() function.
#include<iostream>
using namespace std;
void print(int x)
{
	if(x==9)
	{
		return;
	}
	else
	{
		cout<<x<<" "<<endl;
		print(x-1);
	
	}
	
	
}
int main()
{
	print(20);
}

