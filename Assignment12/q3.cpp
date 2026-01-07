#include<iostream>
using namespace std;
class Distance 
{
	public:
		int km,mtr;
		void scan()
		{
			cout<<"Enter km and mtr :";
			cin>>km>>mtr;
			convert();
		}
		void print()
		{
			cout<<"km is :"<<km;
			cout<<" mtr is :"<<mtr;
		}
		void convert()
		{
			km = km + mtr/1000;
			mtr = mtr % 1000;
		}
		
		
		bool operator>(Distance &d)
		{
			if(km > d.km) return true;
			if(km == d.km && mtr > d.mtr) return true;
			return false;
		}
		bool operator<(Distance &d)
		{
			if(km < d.km) return true;
			if(km == d.km && mtr < d.mtr) return true;
			return false;
		}
		
};
class Node
{
	public:
		Distance data;
		Node *next;
		
		Node()
		{
			next=NULL;
		}
		Node(Distance temp)
		{
			data=temp;
			next=NULL;
		}
		
};
class SLL
{
	Node *head;
	public:
		SLL()
		{
			head=NULL;
		}
		void addatend(Distance temp)
		{
			temp.convert();
			Node *p=new Node(temp);
			if(head==NULL)
			{
				head=p;
			}
			else
			{
				Node *q=head;
				while(q->next!=NULL)
				{
					q=q->next;
				}
				q->next=p;
				
			}
		}
		void sort()
		{
			if(head==NULL)
			{
				cout<<"empty list :";
				return;
			}
			else
			{
				Node *p=head;
				Node *q;
				for(p=head;p!=NULL;p=p->next)
				{
					for(q=p->next;q!=NULL;q=q->next)
					{
						if(p->data>q->data)
						{
							Distance temp;
							temp=p->data;
							p->data=q->data;
							q->data=temp;
						}
					}
				}
			}
		}
		void findmax()
		{
			if(head==NULL)
			{
				return;
			}
			else
			{
				Node *p=head;
				Distance max=p->data;
				while(p!=NULL)
				{
					if(p->data>max)
					{
						max=p->data;
					}
					p=p->next;
				}
				cout<<"Max is : ";
				max.print();
				cout<<endl;
			}
		}
		void findmin()
		{
			if(head==NULL)
			{
				return;
			}
			else
			{
				Node *p=head;
				Distance min=p->data;
				while(p!=NULL)
				{
					if(p->data<min)
					{
						min=p->data;
					}
					p=p->next;
				}
				cout<<"Min is : ";
				min.print();
				cout<<endl;
			}
		}
		void display()
		{
			Node *p=head;
			while(p!=NULL)
			{
				p->data.print();
				cout<<" -> ";
				p=p->next;
			}
			cout<<"NULL"<<endl;
		}
};
int main()
{
	SLL Distances;
	Distance dist;
	
	for(int i=1;i<4;i++)
	{
		dist.scan();
		Distances.addatend(dist);
	}
	
	cout<<"List :"<<endl;
	Distances.display();
	Distances.findmax();
	Distances.findmin();
	Distances.sort();
	cout<<"Sorted List :"<<endl;
	Distances.display();
}

