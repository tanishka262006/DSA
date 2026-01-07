#include <iostream>
#include <cstring>
using namespace std;

class Node {
public:
    char* cityname;
    Node* next;

    Node(const char temp[]) {
        cityname = new char[strlen(temp) + 1];
        strcpy(cityname, temp);
        next = NULL;
    }

    ~Node() {
        delete[] cityname;
    }
};

class SLL {
    Node* head;

public:
    SLL() { head = NULL; }

    // Convert to uppercase (to maintain consistency)
    void convert(char* ptr) {
        while (*ptr != '\0') {
            if (*ptr >= 'a' && *ptr <= 'z') {
                *ptr = *ptr - 32;
            }
            ptr++;
        }
    }

    void create() {
        int n;
        cout << "Enter number of nodes: ";
        cin >> n;
        cin.ignore(); // clear newline from buffer

        if (n == 0) return;

        char temp[30];
        cout << "Enter city name: ";
        cin.getline(temp, 30);
        convert(temp);
        head = new Node(temp);

        Node* p = head;
        for (int i = 1; i < n; i++) {
            cout << "Enter next city name: ";
            cin.getline(temp, 30);
            convert(temp);
            p->next = new Node(temp);
            p = p->next;
        }
    }

    void show() {
        if (head == NULL) {
            cout << "List is empty\n";
            return;
        }
        Node* p = head;
        cout << "Cities in the list:\n";
        while (p != NULL) {
            cout << p->cityname << endl;
            p = p->next;
        }
    }

    void deleteCity(const char* name) {
        if (head == NULL) {
            cout << "List is empty\n";
            return;
        }

        if (strcmp(head->cityname, name) == 0) {
            Node* temp = head;
            head = head->next;
            delete temp;
            cout << "City deleted.\n";
            return;
        }

        Node* p = head;
        while (p->next != NULL && strcmp(p->next->cityname, name) != 0) {
            p = p->next;
        }

        if (p->next == NULL) {
            cout << "City not found!\n";
        } 
		else 
		{
            Node* temp = p->next;
            p->next = temp->next;
            delete temp;
            cout << "City deleted.\n";
        }
    }

    void sortCities() {
        if (head == NULL || head->next == NULL) return;

        for (Node* i = head; i != NULL; i = i->next) {
            for (Node* j = i->next; j != NULL; j = j->next) {
                if (strcmp(i->cityname, j->cityname) > 0) {
                    char* temp = i->cityname;
                    i->cityname = j->cityname;
                    j->cityname = temp;
                }
            }
        }
        cout << "Cities sorted.\n";
    }

    bool searchCity(const char* name) {
        Node* p = head;
        while (p != NULL) {
            if (strcmp(p->cityname, name) == 0) return true;
            p = p->next;
        }
        return false;
    }
};

int main() {
    SLL list;
    list.create();
    list.show();

    char str[30];

    cout << "\nEnter city to delete: ";
    cin.getline(str, 30);
    list.convert(str);
    list.deleteCity(str);
    list.show();

    cout << "\nSorting...\n";
    list.sortCities();
    list.show();

    cout << "\nEnter city to search: ";
    cin.getline(str, 30);
    list.convert(str);
    if (list.searchCity(str))
        cout << "Found\n";
    else
        cout << "Not Found\n";

    return 0;
}

