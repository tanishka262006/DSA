/*14.Scan base and power from user.Find base raised to power.
*/
#include<iostream>
using namespace std;
int main()
{
	int base,power;
	cin>>base>>power;
	int i;
	int ans=1;
	for(i=0;i<power;i++)
	{
		ans=ans*base;
	}
	cout<<ans;

}


