#include<iostream>
#include<string.h>
using namespace std;
class Node
{
public:
    char* name;
    Node* next;
    Node()
    {
        name = new char[30];
        next = NULL;
    }
    ~Node()
    {
        delete name;
    }
};

int main()
{
    Node T1, T2;
    char* p, * q, * r;

    {
        Node T3;
        strcpy(T1.name, "ajay");
        strcpy(T2.name, "vijay");
        strcpy(T3.name, "sujay");

        p = T1.name;
        r = T3.name;
        q = r;
        delete p;
        delete T2.name;
    }
    cout << "\np = " << p;
    cout << "\nq = " << q;
}

