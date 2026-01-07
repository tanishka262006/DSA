#include <iostream>
#include <stack>
#include <string>
using namespace std;

// ==========================
// Class: Student
// ==========================
class Student {
public:
    int rollNo;
    string name;
    float marks;

    Student() {
        rollNo = 0;
        name = "";
        marks = 0.0;
    }

    Student(int r, string n, float m) {
        rollNo = r;
        name = n;
        marks = m;
    }

    void display() const {
        cout << "Roll: " << rollNo
             << " | Name: " << name
             << " | Marks: " << marks << endl;
    }
};

// ==========================
// Class: Node
// ==========================
class Node {
public:
    Student data;
    Node *left, *right;

    Node(Student s) {
        data = s;
        left = right = NULL;
    }
};

// ==========================
// Class: BST (Binary Search Tree)
// ==========================
class BST {
private:
    Node *root;

    // Helper functions
    Node* insert(Node *node, Student s) {
        if (!node)
            return new Node(s);
        if (s.rollNo < node->data.rollNo)
            node->left = insert(node->left, s);
        else if (s.rollNo > node->data.rollNo)
            node->right = insert(node->right, s);
        else
            cout << "Duplicate Roll Number not allowed!\n";
        return node;
    }

    Node* search(Node *node, int roll) {
        if (!node || node->data.rollNo == roll)
            return node;
        if (roll < node->data.rollNo)
            return search(node->left, roll);
        return search(node->right, roll);
    }

    Node* findMin(Node *node) {
        while (node && node->left)
            node = node->left;
        return node;
    }

    Node* deleteNode(Node *node, int roll) {
        if (!node) return node;

        if (roll < node->data.rollNo)
            node->left = deleteNode(node->left, roll);
        else if (roll > node->data.rollNo)
            node->right = deleteNode(node->right, roll);
        else {
            // Node found
            if (!node->left) {
                Node *temp = node->right;
                delete node;
                return temp;
            } else if (!node->right) {
                Node *temp = node->left;
                delete node;
                return temp;
            }
            Node *temp = findMin(node->right);
            node->data = temp->data;
            node->right = deleteNode(node->right, temp->data.rollNo);
        }
        return node;
    }

    void inorder(Node *node) {
        if (!node) return;
        inorder(node->left);
        node->data.display();
        inorder(node->right);
    }

    void preorder(Node *node) {
        if (!node) return;
        node->data.display();
        preorder(node->left);
        preorder(node->right);
    }

    void postorder(Node *node) {
        if (!node) return;
        postorder(node->left);
        postorder(node->right);
        node->data.display();
    }

    void inorderNonRecursive(Node *node) {
        stack<Node *> st;
        Node *curr = node;
        while (curr || !st.empty()) {
            while (curr) {
                st.push(curr);
                curr = curr->left;
            }
            curr = st.top();
            st.pop();
            curr->data.display();
            curr = curr->right;
        }
    }

    void preorderNonRecursive(Node *node) {
        if (!node) return;
        stack<Node *> st;
        st.push(node);
        while (!st.empty()) {
            Node *curr = st.top();
            st.pop();
            curr->data.display();
            if (curr->right) st.push(curr->right);
            if (curr->left) st.push(curr->left);
        }
    }

    void postorderNonRecursive(Node *node) {
        if (!node) return;
        stack<Node *> s1, s2;
        s1.push(node);
        while (!s1.empty()) {
            Node *curr = s1.top();
            s1.pop();
            s2.push(curr);
            if (curr->left) s1.push(curr->left);
            if (curr->right) s1.push(curr->right);
        }
        while (!s2.empty()) {
            s2.top()->data.display();
            s2.pop();
        }
    }

    int countNodes(Node *node) {
        if (!node) return 0;
        return 1 + countNodes(node->left) + countNodes(node->right);
    }

    void findHighestLowest(Node *node, Student &high, Student &low) {
        if (!node) return;
        if (node->data.marks > high.marks)
            high = node->data;
        if (node->data.marks < low.marks)
            low = node->data;
        findHighestLowest(node->left, high, low);
        findHighestLowest(node->right, high, low);
    }

public:
    BST() { root = NULL; }

    void insert(Student s) { root = insert(root, s); }

    void deleteStudent(int roll) { root = deleteNode(root, roll); }

    void searchStudent(int roll) {
        Node *res = search(root, roll);
        if (res)
            res->data.display();
        else
            cout << "Student not found!\n";
    }

    void displayRecursive() {
        cout << "\nInorder Traversal:\n";
        inorder(root);
        cout << "\nPreorder Traversal:\n";
        preorder(root);
        cout << "\nPostorder Traversal:\n";
        postorder(root);
    }

    void displayNonRecursive() {
        cout << "\nInorder (Non-Recursive):\n";
        inorderNonRecursive(root);
        cout << "\nPreorder (Non-Recursive):\n";
        preorderNonRecursive(root);
        cout << "\nPostorder (Non-Recursive):\n";
        postorderNonRecursive(root);
    }

    void showHighestLowest() {
        if (!root) {
            cout << "No students in database.\n";
            return;
        }
        Student high = root->data, low = root->data;
        findHighestLowest(root, high, low);
        cout << "\nStudent with Highest Marks:\n";
        high.display();
        cout << "Student with Lowest Marks:\n";
        low.display();
    }

    void showCount() {
        cout << "\nTotal number of students: " << countNodes(root) << endl;
    }
};

// ==========================
// MAIN FUNCTION
// ==========================
int main() {
    BST bst;
    int choice;
    do {
        cout << "\n--- Student Database Menu ---\n";
        cout << "1. Insert Student\n2. Delete Student\n3. Search Student\n";
        cout << "4. Display Recursive\n5. Display Non-Recursive\n";
        cout << "6. Highest & Lowest Marks\n7. Total Students\n8. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            int roll;
            string name;
            float marks;
            cout << "Enter Roll No: "; cin >> roll;
            cout << "Enter Name: "; cin >> name;
            cout << "Enter Marks: "; cin >> marks;
            bst.insert(Student(roll, name, marks));
        } 
        else if (choice == 2) {
            int roll;
            cout << "Enter Roll No to delete: ";
            cin >> roll;
            bst.deleteStudent(roll);
        } 
        else if (choice == 3) {
            int roll;
            cout << "Enter Roll No to search: ";
            cin >> roll;
            bst.searchStudent(roll);
        } 
        else if (choice == 4)
            bst.displayRecursive();
        else if (choice == 5)
            bst.displayNonRecursive();
        else if (choice == 6)
            bst.showHighestLowest();
        else if (choice == 7)
            bst.showCount();

    } while (choice != 8);

    cout << "Program terminated.\n";
    return 0;
}

