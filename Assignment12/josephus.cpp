#include <iostream>
#define MAX 30
using namespace std;

class CirQueue {
    int data[MAX];
    int front, rear;

public:
    CirQueue() 
	{
        front = rear = -1;
    }

    int empty() 
	{
        return (front == -1);
    }

    int full() 
	{
        return (front == (rear + 1) % MAX);
    }

    void enqueue(int x) 
	{
        if (full()) 
		{
            cout << "Queue is full, can't enqueue\n";
            return;
        }
        if (empty()) 
		{
            front = rear = 0;
        } 
		else 
		{
            rear = (rear + 1) % MAX;
        }
        data[rear] = x;
    }

    int dequeue() 
	{
        if (empty()) 
		{
            return -1;
        }
        int x = data[front];
        if (front == rear) 
		{
            front = rear = -1;  // reset after last element
        }
		else 
		{
            front = (front + 1) % MAX;
        }
        return x;
    }
};

void Josephus(int n, int m) 
{
    CirQueue que;

    // Fill queue with people labeled 1..n
    for (int i = 1; i <= n; i++) 
	{
        que.enqueue(i);
    }

    // Elimination process
    for(int k=1;k<n;k++)
	{
        for (int j = 1; j < m; j++) 
		{
            int x = que.dequeue();
            que.enqueue(x);  // move skipped person to back
        }
        que.dequeue();
       
    }
    cout<<"winner is "<<que.dequeue();
    
}

int main() {
    int n, m;
    cout << "Enter number of people (<= " << MAX << "): ";
    cin >> n;
    cout << "Enter step for elimination: ";
    cin >> m;

    Josephus(n, m);

    return 0;
}

