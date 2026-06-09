#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
class LinkedList {
public:
    Node *head;

    LinkedList() {
        head = nullptr;
    }
    void insertFront(int x) {
        Node *newNode = new Node(x);
        newNode->next = head;
        head = newNode;
    }
    void insertEnd(int x) {
        Node* newNode = new Node(x);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    void insertPosition(int pos, int x) {
        // Node* newNode = new Node(x);
        if (pos == 1) {
            insertFront(x);
            return;
        }
        Node* newNode = new Node(x);
        Node* temp = head;
        for (int i = 1; i < pos-1; i++) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
    void deleteFront() {
        if (head == nullptr) return;

        Node* temp = head;
        head = head->next;

        delete temp;
    }
    void deleteLast(Node*& head) {
        if (head == nullptr) return;

        if (head->next == nullptr) {
            delete head;
            head = nullptr;
            return;
        }
        Node* temp = head;
        while (temp->next->next != nullptr) {
            temp = temp->next;
        } 
        delete temp->next;
        temp->next = nullptr;
    }
    
    
};
int main () {
    LinkedList list;

    list.insertFront(40);
    list.insertFront(2);
    list.insertFront(0);
    list.insertFront(40);

    list.insertEnd(10);

    list.insertPosition(3, 60);

    list.deleteFront();

    

    return 0;
}