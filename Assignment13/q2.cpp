/*Create a linked list of words where words are input from user.
Every node must contain a linked list which contains 
every character from its word.
Make sure that no any character will repeat.
Example is shown below.

pune -> p-u-n-e
 ||
nagpur -> n-a-g-p-u-r
 ||
solapur -> s-o-l-a-p-u-r
 ||
satara -> s-a-t-r*/
#include<iostream>
using namespace std;
class Node
{
	string name;
	Node *next;
	Node()
	{
		next=NULL;
	}
	Node(string n)
	{
		int i=0;
		cout<<"Enter string ";
		cin>>n;
		while(1)
		{
			if(strcmp(name,n)==0)
			{
				cout<<""
			}
		}
	}
};
class letterNode
{
	char letter;
	letterNode *next;
	letterNode()
	{
		next=NULL;
	}
	
};
class Lettersll
{
	public:
		
		letterNode *head;
		Lettersll()
		{
			head=NULL;
		}
		
};
class SLLword
{
	Node *head;
	SLLword()
	{
		head=NULL;
	}
};
int main()
{
	
}
