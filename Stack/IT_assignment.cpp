#include <iostream>
#include <string.h>
#include <limits>
using namespace std;

class Person {
public:
    long long number;
    char name[20];

    Person() {
        number = 0;
        strcpy(name, "");
    }

    void scandata() {
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        cout << "Enter Name: ";
        cin.getline(name, 20);

        cout << "Enter phone number: ";
        cin >> number;
    }

    void toLower(char *s) {
        for (int i = 0; s[i] != '\0'; i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = s[i] + 32;  
            }
        }
    }

    void showdata() {
        cout << "Name: " << name << " | Number: " << number << endl;
    }
};

class Node {
public:
    Node *prev;
    Person info;
    Node *next;

    Node() {
        next = prev = NULL;
    }

    Node(Person temp) {
        info = temp;
        next = prev = NULL;
    }
};

class DLL {
    Node *head;

public:
    DLL() 
	{ 
		head = NULL; 
	}

    void create();
    void show();
    void addatbeg(Person temp);
    void addatend(Person temp);
    void showrev(Node *p);
    void delbyname(char *s);
    Node *gethead() { return head; }
    int searchbyname(char *s);
};

void DLL::addatbeg(Person temp) {
    Node *p = new Node(temp);
    if (head == NULL) {
        head = p;
    } else {
        p->next = head;
        head->prev = p;
        head = p;
    }
}

void DLL::addatend(Person temp) 
{
    Node *p = new Node(temp);
    if (head == NULL) 
	{
        head = p;
    }
	 else 
	{
        Node *q = head;
        while (q->next != NULL) {
            q = q->next;
        }
        q->next = p;
        p->prev = q;
    }
}

void DLL::create() {
    int n;
    cout << "Enter number of contacts: ";
    cin >> n;
    if (n == 0) return;

    Person temp;
    temp.scandata();
    head = new Node(temp);
    Node *p = head;

    for (int i = 0; i < n - 1; i++) {
        temp.scandata();
        p->next = new Node(temp);
        p->next->prev = p;
        p = p->next;
    }
}

void DLL::show() {
    if (head == NULL) {
        cout << "No contacts to display.\n";
        return;
    }
    Node *p = head;
    while (p != NULL) {
        p->info.showdata();
        p = p->next;
    }
}

void DLL::showrev(Node *p) {
    if (p == NULL) return;
    showrev(p->next);
    p->info.showdata();
}

int DLL::searchbyname(char *s) 
	{
    Person helper;
    helper.toLower(s);

    Node *p = head;
    while (p != NULL) {
        char tempName[20];
        strcpy(tempName, p->info.name);
        helper.toLower(tempName);

        if (strcmp(tempName, s) == 0) {
            cout << "Contact found: ";
            p->info.showdata();
            return 1;
        }
        p = p->next;
    }
    return 0;
}

void DLL::delbyname(char *s) {
    if (head == NULL) return;

    Person helper;
    helper.toLower(s);

    Node *p = head;
    while (p != NULL) 
	{
        char tempName[20];
        strcpy(tempName, p->info.name);
        helper.toLower(tempName);

        if (strcmp(tempName, s) == 0) 
		{
            if (p->prev) p->prev->next = p->next;
            else head = p->next;

            if (p->next) p->next->prev = p->prev;

            delete p;
            cout << "Contact deleted successfully.\n";
            return;
        }
        p = p->next;
    }
    cout << "Contact not found.\n";
}

int main() {
    Person p;
    DLL source;

    source.create();
    cout << "\nContacts in list:\n";
    source.show();

    p.scandata();
    source.addatbeg(p);
    cout << "\nAfter add at beginning:\n";
    source.show();

    p.scandata();
    source.addatend(p);
    cout << "\nAfter add at end:\n";
    source.show();

    char name[20];
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "\nEnter name to search: ";
    cin.getline(name, 20);
    if (!source.searchbyname(name)) {
        cout << "Not found.\n";
    }

    cout << "\nReverse contact list:\n";
    source.showrev(source.gethead());

    cout << "\nEnter name to delete: ";
    cin.getline(name, 20);
    source.delbyname(name);
    source.show();

    return 0;
}

