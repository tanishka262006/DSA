#include <iostream>
using namespace std;

class Number {
public:
    int x, y;
    Number() {
        x = y = 0;
    }
    Number(int a, int b) {
        x = a;
        y = b;
    }
    void scan() {
        cout << "Enter two integers: ";
        cin >> x >> y;
    }
    void print() {
        cout << "(" << x << ", " << y << ")";
    }
};

class Node {
public:
    Number num;
    Node* next;
    Node(Number temp) {
        num = temp;
        next = NULL;
    }
};

class SLL {
    Node* head;
public:
    SLL() {
        head = NULL;
    }

    // Create list from user input
    void create(int n) {
        for (int i = 0; i < n; i++) {
            Number temp;
            temp.scan();
            addAtEnd(temp);
        }
    }

    // Add at end
    void addAtEnd(Number temp) {
        Node* newNode = new Node(temp);
        if (!head) {
            head = newNode;
        } else {
            Node* t = head;
            while (t->next) t = t->next;
            t->next = newNode;
        }
    }

    // Show list
    void show() {
        if (!head) {
            cout << "List is empty.\n";
            return;
        }
        Node* t = head;
        cout << "List: ";
        while (t) {
            t->num.print();
            cout << " -> ";
            t = t->next;
        }
        cout << "NULL\n";
    }

    // Search element by value (x, y)
    int search(int a, int b) {
        Node* t = head;
        int pos = 1;
        while (t) {
            if (t->num.x == a && t->num.y == b) {
                return pos;
            }
            t = t->next;
            pos++;
        }
        return -1; // not found
    }

    // Delete by position
    void delbypos(int pos) {
        if (!head) {
            cout << "List is empty.\n";
            return;
        }
        if (pos == 1) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        Node* t = head;
        for (int i = 1; i < pos - 1 && t; i++) {
            t = t->next;
        }
        if (!t || !t->next) {
            cout << "Invalid position.\n";
            return;
        }
        Node* delNode = t->next;
        t->next = delNode->next;
        delete delNode;
    }

    // Add at given position
    void addbypos(int pos, Number temp) {
        Node* newNode = new Node(temp);
        if (pos == 1) {
            newNode->next = head;
            head = newNode;
            return;
        }
        Node* t = head;
        for (int i = 1; i < pos - 1 && t; i++) {
            t = t->next;
        }
        if (!t) {
            cout << "Invalid position.\n";
            delete newNode;
            return;
        }
        newNode->next = t->next;
        t->next = newNode;
    }
};

int main() {
    SLL source;
    int n, choice;
    cout << "How many objects you want to add initially? ";
    cin >> n;
    source.create(n);

    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Show list\n";
        cout << "2. Search element\n";
        cout << "3. Delete by position\n";
        cout << "4. Add by position\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            source.show();
            break;
        case 2: {
            int a, b;
            cout << "Enter x and y to search: ";
            cin >> a >> b;
            int pos = source.search(a, b);
            if (pos == -1) cout << "Not found.\n";
            else cout << "Found at position " << pos << "\n";
            break;
        }
        case 3: {
            int pos;
            cout << "Enter position to delete: ";
            cin >> pos;
            source.delbypos(pos);
            break;
        }
        case 4: {
            int pos;
            Number temp;
            cout << "Enter position to insert: ";
            cin >> pos;
            temp.scan();
            source.addbypos(pos, temp);
            break;
        }
        case 5:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice.\n";
        }
    } while (choice != 5);

    return 0;
}

