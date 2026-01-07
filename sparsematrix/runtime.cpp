#include<iostream>
using namespace std;
void scan(int **num,int row,int cols)
{
	cout<<"\nenter "<<row*cols<<" array elements :";
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<cols;j++)
		{
			cin>>num[i][j];
		}
	}
}
void print(int **num,int row,int cols)
{
	cout<<row*cols<<" array elements are:"<<endl;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<cols;j++)
		{
			cout<<num[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main()
{
	int **num;
	int row,cols;
	cout<<"Enter number of rows and columns :\n";
	cin>>row>>cols;
	num=new int*[row];
	
	
	for(int i=0;i<row;i++)
	{
		num[i]=new int[cols];
	}
	scan(num,row,cols);
	print(num,row,cols);
	cout<<"hello";
	int k=0;
	int **sparse;

	k=0;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<cols;j++)
		{
			if(num[i][j]!=0)
			{
				k++;	
			}
		}
	}
	sparse=new int*[k+1];
	for(int i=0;i<k+1;i++)
	{
		sparse[i]=new int[3];
	}
	sparse[0][0]=row;
	sparse[0][1]=cols;
	
	int f=1;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<cols;j++)
		{
			if(num[i][j]!=0)
			{
				sparse[f][0]=i;
				sparse[f][1]=j;
				sparse[f][2]=num[i][j];
				f++;
			}
		}
	}
	sparse[0][2]=k;
	
	cout<<"sparse MATRIX:"<<endl;
	print(sparse,f,3);
}
