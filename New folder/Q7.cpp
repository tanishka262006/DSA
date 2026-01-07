#include<iostream>
using namespace std;
class Node
{
	
	//define class here
	public:
		int data;
		Node *next;
		
};
int main()
{
	Node T1,T2,T3;
	//For these three objects,create a compiletime linked list.
	//Print data of all objects using T only.
	T1.data=10;
	T2.data=20;
	T3.data=30;
	T1.next=&T2;
	T2.next=&T3;
	T3.next=NULL;
	Node *T=&T1;
	while(T!=NULL)
	{
		cout<<T->data<<endl;
		T=T->next;
	}
	
}

