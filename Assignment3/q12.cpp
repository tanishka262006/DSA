//Q12.Write program to create a linkedlist for 4 compiletime objects of class Node.
//Print data of all the nodes.
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
	Node num1,num2,num3,num4;
	num1.data=10;
	num2.data=20;
	num3.data=30;
	num4.data=40;
	num1.next=&num2;
	num2.next=&num3;
	num3.next=&num4;
	num4.next=NULL;
	Node *p=&num1;
	while(p!=NULL)
	{
		cout<<p->data<<endl;
		p=p->next;
	}
	
	
	
}



