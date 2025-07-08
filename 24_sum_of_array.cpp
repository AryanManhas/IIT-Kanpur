#include<iostream>
using namespace std;

int sum(int a[] , int size)
{
    if (size == 0)
        return 0;
    return a[0] + sum(a+1,size-1);
    
}

int main()
{
    int arr[5]={10,12,45,23,77};

    int size = sizeof(arr)/sizeof(int);

    sum(arr, size);

    std::cout<<"Sum: "<<sum(arr , size);

    return 0;
}