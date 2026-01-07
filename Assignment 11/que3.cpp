//WAP to implement shift queue using array.
#include<iostream>
#define MAX 3
using namespace std;
class ShiQUeue
{
	int data[MAX];
	int front,rear;
	public:
		ShiQUeue()
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
			if(!full())
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
				return;
			}
			cout<<"can't push "<<endl;
			
		}
		int dequeue()
		{
			if(empty())
			{
				cout<<"can't dequeue "<<endl;
				return 0;
			}
			else
			{
				int x=data[front];
				if(front==rear)
				{
					
					front=rear=-1;
				}
				else
				{
					int i;
					for(i=front;i<rear;i++)
					{
						data[i]=data[i+1];
					}
					rear--;
					
				}
				return x;
			}
			
		}
		void show()
		{
			int i;
			for(int i=front;i<=rear;i++)
			{
				cout<<"data is :"<<data[i]<<endl;
			}
		}
};
int main()
{
	ShiQUeue sh;
	sh.enqueue(20);
	sh.show();
	sh.enqueue(20);
	sh.enqueue(20);
	sh.enqueue(20);
	sh.enqueue(20);
	cout<<" "<<endl;
	sh.show();
	for(int i=0;i<4;i++)
	{
		sh.dequeue();
	}
	for(int i=0;i<4;i++)
	{
		sh.enqueue(i*3);
	}
	sh.show();
	
}

