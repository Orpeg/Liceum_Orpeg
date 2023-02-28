#include <iostream>
using namespace std;

class Node {
public:
    int value;
    Node* next;
};

class LinkedList {
public:
    LinkedList() : head(nullptr) {}

    void add(int value) {
        Node* newNode = new Node();
        newNode->value = value;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    void display() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->value << " -> ";
            current = current->next;
        }
        cout << "NULL" << endl;
    }

private:
    Node* head;
};

int main() {
    LinkedList list;

    list.add(1);
    list.add(2);
    list.add(3);
    list.add(4);
    list.add(5);

    list.display();

    return 0;
}
