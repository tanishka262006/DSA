#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    cout<<"Prime factors: ";

    int i=2;
    for(i=2;i<=sqrt(n);i++) 
	{
        while(n%i== 0) 
		{
            cout<<i<<" ";
            n=n/i;
        }
	}
	if(n>1) 
	{
        cout<<n;
    }
    cout<<endl;
    return 0;
}

