#include <iostream>
#include <cstring>
using namespace std;

class Person {
public:
    char name[20];
    int age;
    char gender;
    int ticketNo;
	
    // static counter for ticket numbers
    static int ticketCounter;

    Person() {
        ticketNo = ++ticketCounter; // assign unique ticket number
    }

    void scan() {
        cin.ignore(); // clear input buffer before getline
        cout << "Enter name of person: ";
        cin.getline(name, 20);
        cout << "Enter age of person: ";
        cin >> age;
        cout << "Enter gender (f for female, m for male): ";
        cin >> gender;
    }

    void show() {
        cout << "Ticket #" << ticketNo << " -> Name: " << name
             << ", Age: " << age << ", Gender: " << gender << endl;
    }
};

// Initialize static variable
int Person::ticketCounter = 0;

class Node {
public:
    Person p;
    Node* next;
    Node(Person temp) {
        p = temp;
        next = NULL;
    }
};

class Queue {
    Node* front;
    Node* rear;
public:
    Queue() {
        front = NULL;
        rear = NULL;
    }

    bool empty() {
        return front == NULL;
    }

    void enqueue(Person p) {
        Node* q = new Node(p);
        if (empty()) {
            front = rear = q;
        } else {
            rear->next = q;
            rear = q;
        }
        cout << p.name << " received Ticket #" << p.ticketNo << " and joined the queue.\n";
    }

    void dequeue() {
        if (empty()) {
            cout << "Queue is empty! No customer to process.\n";
            return;
        }
        Node* q = front;
        cout << "Processing customer: ";
        q->p.show();
        front = front->next;
        if (front == NULL) rear = NULL; // queue became empty
        delete q;
    }

    void show() {
        if (empty()) {
            cout << "Queue is empty.\n";
            return;
        }
        cout << "Current queue:\n";
        Node* p = front;
        while (p != NULL) {
            p->p.show();
            p = p->next;
        }
    }
};

int main() 
{
    Queue que;
    int choice;

    do {
        cout << "\n--- Ticket Booking System ---\n";
        cout << "1. Add Customer (Enqueue)\n";
        cout << "2. Process Customer (Dequeue)\n";
        cout << "3. Show Queue\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) 
		{
        case 1: 
		{
            Person p;
            p.scan();
            que.enqueue(p);
            break;
        }
        case 2:
            que.dequeue();
            break;
        case 3:
            que.show();
            break;
        case 4:
            cout << "Exiting system.\n";
            break;
        default:
            cout << "Invalid choice!\n";
        }
    } 
	while (choice != 4);

    return 0;
}

