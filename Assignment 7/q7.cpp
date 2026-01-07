//Q7.Create an SLL of citynames. Provide following functions to user.
/*-add city to list
(city must not be repeated)
-delete city
-print all cities
-sort cities in list in ascending order.
-search a city in list.

*/
#include<iostream>
#include<string.h>
using namespace std;
class Node
{
	public:
	char *cityname;
	Node *next;
	Node()
	{
		cityname=new char[20];
		next=NULL;
	}
	
};
class SLL
{
	Node *head;
	public:
	SLL()
	{
		head=NULL;
	}
	
//	void addcity()
//	{
//		Node *p=new Node[20];
//		if(strcmp(p->cityname,)
//	}
	void create()
	{
		int n,i;
		cout<<"Enter how many nodes you want "<<endl;
		cin>>n;
		if(n==0)
		{
			return ;
		}
		else
		{
			
			cout<<"Enter name for first node "<<endl;
			cin.getline(cityname,20);
			head=new Node(cityname);
			Node *p=head;
			for(i=0;i<n-1;i++)
			{
				cout<<"Enter name for first node "<<endl;
				cin.getline(cityname,20);	
				p->next=new Node(cityname);
				p=p->next;
			
			}
		}
	}
	void show()
	{
		if(head==NULL)
		{
			cout<<"Empty list "<<endl;
			return;
		}
		Node *p=head;
		while(p!=NULL)
		{
			cout<<"city name is "<<cityname<<endl;
			p=p->next;
		}
		
	}
};
int main()
{
	SLL source;
	source.create();
	//source.addcity();
	source.show();
	
}
