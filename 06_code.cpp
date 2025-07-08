#include <iostream>

using namespace std;

int num = 10;

int main()
{

        int num = 20;
        int *ptr = &num;
        int &x = num;
        cout<<num<<endl;
        cout<<*ptr<<endl; // address 
        cout<<x<<endl; //20 
        // cout<<**(*ptr)<<endl; //20
        cout<<*(&num)<<endl; //20
        cout<<&num<<endl; //address of num
        cout<<ptr<<endl; //address of num
        cout<<&x<<endl; //address of num
        cout<<*(&ptr)<<endl; //address of num
//     cout<<num<<endl; //10
//     cout<< ::num<<endl; //10 defines scope the one outside the current scope
//     return 0;
} 