//Q2.WAP to implement DoubleEndedQueue in two different programs.
#include<iostream>
#define MAX 6
using namespace std;
class ISDE
{
	int data[MAX];
	int front,rear;
	public:
		ISDE()
		{
			front=rear=-1;
		}
	//input restricted (Enqueue normal)
	int empty()
	{
		if(front==-1)
		{
			return 1;
		}
		return 0;
	}
	int fullR()
	{
		if(rear==MAX-1)
		{
			return 1;
		}
		return 0;
	}
	int dequeuef()
	{
		int x;
		if(empty())
		{
			cout<<"can't dequeue :";
			return 0;
		}
		x=data[front];
		if(front==rear)
		{
			
			front=rear=-1;
			
		}
		else
		{
			front++;
		}
		return x;
	}
	int dequeueR()
	{
		int x;
		if(empty())
		{
			cout<<"can't dequeue :";
			return 0;
		}
		x=data[rear];
		if(front==rear)
		{
			
			front=rear=-1;
			
		}
		else
		{
			rear--;
		}
		return x;
	}
	
	void enqueue(int x)
	{
		if(fullR())
		{
			cout<<"can't push :";
			return ;
		}
		else
		{
			if(empty())
			{
				front=rear=0;
				
			}
			else
			{
				rear++;
			}
			data[rear]=x;
		}
	}
	
};

int main()
{
	int i;
	ISDE que;
	
	for(i=0;i<MAX;i++)
	{
		que.enqueue(i*3);
	}
	for(i=0;i<MAX;i++)
	{
		cout<<que.dequeueR()<<endl;
	}
	
}
