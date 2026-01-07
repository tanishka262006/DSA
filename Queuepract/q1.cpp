#include<iostream>
#define MAX 10
using namespace std;
class Queue
{
	int data[MAX];
	int front;
	int rear;
	public:
		Queue()
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
			if(rear==MAX-1)
			{
				return 1;
			}
			return 0;
		}
		void enqueue(int x)
		{
			if(full())
			{
				return;
			}
			if(empty())
			{
				front++;
				rear++;
				data[front]=x;
			}
			else 
			{
				rear++;
				data[rear]=x;
			}
		}
		void show()
		{
			int i;
			for(i=front;i<=rear;i++)
			{
				cout<<"data is :"<<data[i]<<endl;
			}
		}
		int dequeue()
		{
			if(empty())
			{
				return 0;
			}
			else
			{
				int x;
				x=data[front];
				front++;
				return x;
			}
		}
};
int main()
{
	Queue que;
	que.enqueue(10);
	que.enqueue(20);
	que.enqueue(30);
que.enqueue(40);
que.enqueue(50);
	que.show();
	cout<<"after dequeue :"<<endl;
	que.dequeue();
	que.dequeue();
	que.dequeue();
	que.show();
	
}
