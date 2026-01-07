/*WAP to explain local and global variable with scope resolution operator.*/
#include<iostream>
using namespace std;
int i;
int main()
{
	int i;
	cin>>i;
	cin>>::i;
	cout<<"global value is "<<::i;
	cout<<"\nlocal variable is "<<i;

}


