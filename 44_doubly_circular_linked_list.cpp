#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* prev;
    node* next;

    node(int d) : data(d), prev(NULL), next(NULL) {}
};

void print(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->prev << "\t" << temp->data << "\t" << temp->next << endl;
        temp = temp->next;
    }
}

void insertAtTail(node*& head, int val) {
    node* newnode = new node(val);

    if (head == NULL) {
        head = newnode;
        return;
    }

    node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newnode;
    newnode->prev = temp;
}

int main() {
    node* head = NULL;

    insertAtTail(head, 10);
    insertAtTail(head, 20);
    insertAtTail(head, 30);
    insertAtTail(head, 40);

    print(head);

    return 0;
}
