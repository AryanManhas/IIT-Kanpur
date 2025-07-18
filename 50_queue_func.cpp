#include<iostream>
using namespace std;

class myQueue{
    public:

        class node{
            public:
                int data;
                node* next;

                node(int val): data(val), next(NULL){}
        };

void push();
void pop();
int front();
int back();
node* f;
node* r;

void push(int val)
{
    node*newnode = new node(val);

    if (f==NULL)
    {
        f = r = newnode;
        return;
    }
    r->next = newnode;
    r = newnode;
    cout<<"values pushed!!";
};

void pop(){
{
    if (f == NULL)
        return;
}
node* temp r;
f = f->next;
    if(f == NULL)
        r = NULL;
    delete temp;
}

int front()
{
    if( f== NULL)
    {
        if(f == NULL)
            return -1;

        return f->data;
    }
}
};
int main()
{
    myQueue q;
    q.push(10);
    q.push(20);
  return 0;  
}