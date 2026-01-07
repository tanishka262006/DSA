#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int a = 0) {  // default and parameterized constructor
        data = a;
        next = NULL;
    }

    ~Node() {  // deletes all following nodes automatically
        delete next;
    }
};

class SLL {
    Node *head;

public:
    SLL() {
        head = NULL;
    }

    ~SLL() {
        delete head;
    }

    // Recursive function to create n nodes
    Node* createrec(int n) {
        if (n == 0) {
            return NULL;
        }
        int x;
        cout << "Enter data: ";
        cin >> x;
        Node *p = new Node(x);
        p->next = createrec(n - 1);
        return p;
    }

    // Display list recursively
    void showrec(Node *p) {
        if (p == NULL) {
            return;
        }
        cout << p->data << " ";
        showrec(p->next);
    }

    Node* gethead() {
        return head;
    }

    void createList(int n) {
        head = createrec(n);
    }
};

int main() {
    SLL list;
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;
    list.createList(n);
    cout << "List contents: ";
    list.showrec(list.gethead());
    cout << endl;
}

