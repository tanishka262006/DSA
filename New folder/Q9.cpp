/*For above class Node,create a linked list of 4 runtime objects.
Do not use loop to create list.
Do not use loop to print all the data of list.
*/
#include<iostream>
using namespace std;
class Node
{
	public:
		int data;
		Node * next;
};

int main()
{
	Node *T1,*T2,*T3,*T4;
	T1=new Node();
	T2=new Node();
	T3=new Node();
	T4=new Node();
	T1->next=T2;
	T2->next=T3;
	T3->next=T4;
	T4->next=NULL;
	T1->data=10;
	T2->data=20;
	T3->data=30;
	T4->data=40;
	cout<<T1->data<<T2->data<<T3->data<<T4->data<<T1->next<<T2;
	
	
	
}
