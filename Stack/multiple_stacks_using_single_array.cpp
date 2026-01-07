#include<iostream>
#define MAX 20
using namespace std;
class Stack
{
	int data[MAX];
	int *top;
	int *bottom;
	public:
		Stack()
		{
			int n,i;
			cout<<"Enter number of stacks you want :";
			cin>>n;
			if(n==0) return;
			int ne=MAX/n;
			top=new int[n+1];
			bottom=new int[n+1];
			for(i=0;i<=n;i++)
			{
				bottom[i]=i*ne;
				top[i]=bottom[i]-1;
			}
		}
		int empty(int stkno)
		{
			int i=stkno;
			
			if(top[i]+1==bottom[i])
			{
				return 1;
			}
			return 0;
		}
		int full(int stkno)
		{
			if(top[stkno]+1==bottom[stkno+1])
			{
				
				return 1;
			}
			return 0;
		}
		void push(int stkno,int x)
		{
			if(full(stkno)) 
			{
				cout<<"stack is full can't push "<<endl;
				return;
			}
			top[stkno]++;
			data[top[stkno]]=x;
		}
		int pop(int stkno)
		{
			int x;
			if(empty(stkno)) return 0;
			x=data[top[stkno]];
			top[stkno]--;
			return x;
			
		}
		void show(int stkno)
		{
			
//			int i=stkno;
//			for(i=0;i<=ne;i++)
//			{
//				cout<<"data is :"<<data[bottom[i]]<<endl;
//				
//			}
			int i;
			for(i=bottom[stkno];i<=top[stkno];i++)
			{
				cout<<"data is :"<<data[i]<<endl;
			}
		}
};
int main()
{
	Stack stk;
	int i;
	stk.push(1,10);
	stk.push(1,20);
	stk.push(1,20);
	stk.push(1,20);
		stk.push(1,20);
	stk.push(2,30);
	stk.push(2,30);
	stk.push(2,30);
	stk.push(2,30);
	stk.show(1);
	
	
	
}
