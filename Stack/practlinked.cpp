/*Create a C++ program using a circular linked list to implement a simple
music playlist. Each song should have a title and duration. The program
should support adding a song, deleting a song, moving to the next song, and
displaying the current playlist in a loop.*/
#include<iostream>
using namespace std;
class Music
{
	public:
		char title[20];
		int duration;
		Music()
		{
			title[0]='\0';
			duration=0;
		}
		void scan()
		{
			cout<<"Enter title of music "<<endl;
			cin.ignore();
			cin.getline(title,20);
		
			cout<<"Enter duration of song (in seconds ) "<<endl;
			cin>>duration;
			
		}
		void print()
		{
			cout<<"Title of music is "<<title<<endl;
			cout<<"Duration of music is "<<duration<<" sec"<<endl;
			cout<<"------------------------------------------ "<<endl;
		}
};
class Node
{
	public:
	
		Music m;
		Node *next;
		Node()
		{
			next=NULL;
		}
		Node(Music mu)
		{
			m=mu;
			next=NULL;
		}
};
class CLL
{
	Node *front;
	Node *rear;
	public:
		CLL()
		{
			front=NULL;
			rear=NULL;
		}
		void create();
		void show();
		void addatbeg(Music mus);
		void addatend(Music mus);
		void delatbeg();
		void delatend();
		
};
void CLL::delatbeg()
{
	if(front==NULL)
	{
		return;
	}
	else if(front==rear)
	{
		Node *p=front;
		front=NULL;
		rear=NULL;
		delete p;
		
	}
	else
	{
		Node *p=front;
		front=front->next;
		rear->next=front;
		delete p;
	}
	
}
void CLL::delatend()
{
	if(front==NULL)
	{
		return;
	}
	else if(front ==rear)
	{
		Node *p=front;
		front=NULL;
		rear=NULL;
		delete p;
	}
	else
	{
		Node *p=front;
		while(p->next!=rear)
		{
			p=p->next;
		}
		p->next=front;
		delete rear;
		rear=p;
	}
}
void CLL::addatbeg(Music mus)
{
	Node *p=new Node(mus);
	if(front==NULL)
	{
		front=p;
		rear=p;
		rear->next=front;
		return;
	}
	else
	{
		p->next=front;
		front=p;
		rear->next=front;
	}
}
void CLL::addatend(Music mus)
{
	Node *p=new Node(mus);
	if(front==NULL)
	{
		front=p;
		rear=p;
		rear->next=front;
		return;
	}
	else
	{
		rear->next=p;
		rear=p;
		rear->next=front;
		
	}
}
void CLL::show()
{
	if(front==NULL)
	{
		return;
	}
	Node *p=front;
	do
	{
		p->m.print();
		p=p->next;
	}
	while(p!=front);
}
void CLL::create()
{
	int n,x,i;
	cout<<"Enter number of music you want to listen "<<endl;
	cin>>n;
	
	if(n<=0) return;
//	cout<<"Enter info of music "<<endl;
	Music m;
	m.scan();
	front=new Node(m);
	rear=front;
	Node *p=front;
	for(i=0;i<n-1;i++)
	{
		Music temp;
		temp.scan();
		p->next=new Node(temp);
		p=p->next;
		
	}
	rear=p;
	rear->next=front;
	
}
int main()
{
	CLL source;
	source.create();
	source.show();
	Music MUS;
	MUS.scan();
	
	source.addatbeg(MUS);
	MUS.scan();
	source.addatend(MUS);
	source.show();
	int pos;
//	cout<<"enter position "<<endl;
//	cin>>pos
cout<<"after delatbeg "<<endl;
source.delatbeg();
source.show();
source.delatend();
cout<<"after delatend "<<endl;
source.show();

source.addatbeg(MUS);
cout<<"after add at beg  "<<endl;
source.show();
	
	
}
