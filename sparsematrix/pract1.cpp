#include<iostream>
using namespace std;
void scanorig(int original[10][10],int row,int col)
{
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<"\nEnter "<<row*col<<" array elements :";
			cin>>original[i][j];
		}
	}
}
void printorig(int original[10][10],int row,int col)
{
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{	
			cout<<original[i][j]<<" ";
		}
		cout<<endl;
	}
}
void printsparse(int sparse[10][3] , int row,int col)
{
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{	
			cout<<sparse[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main()
{
	int original[10][10];
	int sparse[10][3];
	int rows,cols;
	cout<<"\nEnter rows and columns :";
	cin>>rows>>cols;
	scanorig(original,rows,cols);
	printorig(original,rows,cols);
	sparse[0][0]=rows;
	sparse[0][1]=cols;
	int k=1;
	
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			if(original[i][j]!=0)
			{
				sparse[k][0]=i;
				sparse[k][1]=j;
				sparse[k][2]=original[i][j];
				k++;
				
			}
		}
	}
	sparse[0][2]=k-1;
	cout<<"sparse matrix "<<endl;
	printsparse(sparse,k,3);
}
