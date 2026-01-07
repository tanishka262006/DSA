//WAP to implement Circular queue using array.
#include<iostream>
#define MAX 5
using namespace std;

class Cqueue
{
	int data;
	int front,rear;
	public:
		Cqueue()
		{
			front=rear=-1;
		}
		int empty()
		{
			if(front==-1)
			{
				return 1;
			}
			return 0;
		}
		int full()
		{
			
		}
}
int main()
{
	
}
