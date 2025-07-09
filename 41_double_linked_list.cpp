#include <iostream>

using namespace std;



struct Node {

  int data;

  Node *prev, *next;

  Node(int val) : data(val), prev(nullptr), next(nullptr) {}

};

void deleteTail(Node*& tail) {

  if (!ta

il) return;

  Node* temp = tail;

  tail = tail->prev;

  if (tail) tail->next = nullptr;

  delete temp;

}



void print(Node* head) {

  while (head) {

    cout << head->data << " ";

    head = head->next;

  }

  cout << endl;

}







int main() {

  Node* n1 = new Node(1);

  Node* n2 = new Node(2);

  Node* n3 = new Node(3);

  n1->next = n2; n2->prev = n1;

  n2->next = n3; n3->prev = n2;



  Node* head = n1;

  Node* tail = n3;



  print(head);

  deleteTail(tail);

}



