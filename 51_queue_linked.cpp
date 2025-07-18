#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
    
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

// Queue class
class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() {
        front = rear = nullptr;
    }

    // Enqueue operation
    void enqueue(int val) {
        Node* newNode = new Node(val);
        if (rear == nullptr) {
            front = rear = newNode;
            return;
        }
        rear->next = newNode;
        rear = newNode;
    }

    // Dequeue operation
    void dequeue() {
        if (front == nullptr) {
            cout << "Queue is empty!" << endl;
            return;
        }
        Node* temp = front;
        front = front->next;

        // If front becomes NULL, rear should also be NULL
        if (front == nullptr)
            rear = nullptr;

        delete temp;
    }

    // Peek front
    int peek() {
        if (front == nullptr) {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        return front->data;
    }

    // Check if queue is empty
    bool isEmpty() {
        return front == nullptr;
    }

    // Display the queue
    void display() {
        Node* temp = front;
        while (temp != nullptr) {
            cout << temp->data << " <- ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

// Main function to test the queue
int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();  // Output: 10 <- 20 <- 30 <- NULL

    cout << "Front: " << q.peek() << endl;  // Output: 10

    q.dequeue();
    q.display();  // Output: 20 <- 30 <- NULL

    q.dequeue();
    q.dequeue();
    q.dequeue();  // Output: Queue is empty!

    return 0;
}
