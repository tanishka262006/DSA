//Q2.WAP to implement multiple stacks in one array
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
			int n,ne;
			cout<<"enter number of stacks :";
			cin>>n;
			top=new int[n+1];
			bottom=new int[n+1];
			ne=MAX/n;
			for(int i=0;i<=n;i++)
			{
				bottom[i]=i*ne;
				top[i]=bottom[i]-1;
			}
			
		}
		int empty(int stkno)
		{
			int i;
			if(top[i]+1==bottom[i])
			{
				
				return 1;
			}
			return 0;
		}
		int full(int stkno)
		{
			int i=stkno;
			if(top[i]==bottom[i+1])
			{
				return 1;
			}
			return 0;
		}
		void push(int stkno,int x)
		{
			int i=stkno;
			if(full(stkno))
			{
				cout<<"can't push :"<<endl;
				return;
			}
			else
			{
				top[i]++;
				data[top[i]]=x;
			}
		}
		int pop(int stkno)
		{
			int i=stkno;
			if(empty(i))
			{
				return 0;
			}
			else
			{
				int x=data[top[i]];
				top[i]--;
				return x;
			}
		}
		void show(int stkno)
		{
			int i=stkno;
			if(empty(i))
			{
				return;
			}
			int j;
			for(j=bottom[i];j<=top[i];j++)
			{
				cout<<data[j]<<endl;
			}
		}
		
};
int main()
{
	Stack stk;
	stk.push(1,20);
	stk.push(1,40);
	stk.push(1,30);
	stk.push(1,50);
	stk.push(2,20);
	cout<<" "<<endl;
	cout<<stk.pop(1);
	stk.show(1);
}

