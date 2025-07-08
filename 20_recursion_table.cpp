#include<iostream>

using namespace std;

void func(int num , int a)
{
    if (num>20)
        return;

    cout<< num*a <<endl;
    func(num+1 , a);
    // func(num-1);
}

int main()
{
    int b;
    cin>>b;
    func(1 , b);

    return 0;
}