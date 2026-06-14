//reverse
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (curr) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }

        return prev;
    }
};



//middle


class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }
};

//cycle
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast)
                return true;
        }

        return false;
    }
};

//cycle 11
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                ListNode* ptr = head;

                while (ptr != slow) {
                    ptr = ptr->next;
                    slow = slow->next;
                }

                return ptr;
            }
        }

        return nullptr;
    }
};


//palindrome
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        // Find middle
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Reverse second half
        ListNode* prev = nullptr;
        while (slow) {
            ListNode* nextNode = slow->next;
            slow->next = prev;
            prev = slow;
            slow = nextNode;
        }

        // Compare
        ListNode* left = head;
        ListNode* right = prev;

        while (right) {
            if (left->val != right->val)
                return false;

            left = left->next;
            right = right->next;
        }

        return true;
    }
};


//doubly linked list
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int val) {
        data = val;
        prev = NULL;
        next = NULL;
    }
};

class DoublyLinkedList {
public:
    Node* head;

    DoublyLinkedList() {
        head = NULL;
    }

    void display() {
        Node* temp = head;

        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList dll;

    dll.head = new Node(10);
    dll.head->next = new Node(20);
    dll.head->next->prev = dll.head;

    dll.display();

    return 0;
}

//insert at front 
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int val) {
        data = val;
        prev = NULL;
        next = NULL;
    }
};

class DoublyLinkedList {
public:
    Node* head = NULL;

    void insertFront(int val) {
        Node* newNode = new Node(val);

        newNode->next = head;

        if (head)
            head->prev = newNode;

        head = newNode;
    }

    void display() {
        Node* temp = head;

        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};

int main() {
    DoublyLinkedList dll;

    dll.insertFront(30);
    dll.insertFront(20);
    dll.insertFront(10);

    dll.display();

    return 0;
}
//insert at end
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int val) {
        data = val;
        prev = NULL;
        next = NULL;
    }
};

class DoublyLinkedList {
public:
    Node* head = NULL;

    void insertEnd(int val) {
        Node* newNode = new Node(val);

        if (!head) {
            head = newNode;
            return;
        }

        Node* temp = head;

        while (temp->next)
            temp = temp->next;

        temp->next = newNode;
        newNode->prev = temp;
    }

    void display() {
        Node* temp = head;

        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};

int main() {
    DoublyLinkedList dll;

    dll.insertEnd(10);
    dll.insertEnd(20);
    dll.insertEnd(30);

    dll.display();

    return 0;
}

//delete node
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int val) {
        data = val;
        prev = NULL;
        next = NULL;
    }
};

class DoublyLinkedList {
public:
    Node* head = NULL;

    void insertEnd(int val) {
        Node* newNode = new Node(val);

        if (!head) {
            head = newNode;
            return;
        }

        Node* temp = head;

        while (temp->next)
            temp = temp->next;

        temp->next = newNode;
        newNode->prev = temp;
    }

    void deleteNode(int key) {
        Node* temp = head;

        while (temp && temp->data != key)
            temp = temp->next;

        if (!temp)
            return;

        if (temp == head)
            head = temp->next;

        if (temp->next)
            temp->next->prev = temp->prev;

        if (temp->prev)
            temp->prev->next = temp->next;

        delete temp;
    }

    void display() {
        Node* temp = head;

        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};

int main() {
    DoublyLinkedList dll;

    dll.insertEnd(10);
    dll.insertEnd(20);
    dll.insertEnd(30);

    dll.deleteNode(20);

    dll.display();

    return 0;
}