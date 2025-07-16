#include <iostream>
using namespace std;

#define size 5

class myStack {
    public:
        int arr[size];
        int ptr = -1;

        void push(int);
        void pop();
        int top();
        bool empty();
};

bool myStack::empty() {
    return (ptr == -1);
}

int myStack::top() {
    if (ptr == -1) {
        cout << "Stack is empty.\n";
        return -1; // Sentinel value to indicate error
    }
    return arr[ptr];
}

void myStack::push(int val) {
    if (ptr == size - 1) {
        cout << "Stack Overflow.\n";
        return;
    }
    ptr++;
    arr[ptr] = val;
}

void myStack::pop() {
    if (ptr == -1) {
        cout << "Stack Underflow.\n";
        return;
    }
    ptr--;
}

int main() {
    myStack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout << "Top: " << s.top() << endl;
    s.pop();
    cout << "Top: " << s.top() << endl;
    s.pop();
    s.pop();
    return 0;
}
