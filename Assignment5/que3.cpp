//3.Scan a string from user.Count number of words in the string.
//e.g.  	input = "This is the class of DataStructure."
//	output = 6 words
#include<iostream>
using namespace std;
int main()
{
	char str[40];
	int i=0,count=0;
	cout<<"Enter a string \n";
	cin.getline(str,40);
	
//	while(str[i]==" ")
//	{
//		count++;
//		i++;
//	}
	for(i=0;i<40;i++)
	{
		if(str[i]==' ')
		{
			count++;
		}
	}

	
	cout<<"Number of words are "<<count+1;
	
	
}

