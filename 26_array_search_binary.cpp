#include<iostream>
using namespace std;

int l_search(int a[] , int size , int x)
{
    static int i=0;
    if (size == 0)
        return -1;
    if(a[0] = x)
        return i;
    i++;
    l_search(a+1,size-1,x);
}

int main()
{
    int arr[5]={10,12,45,23,77};

    int size = sizeof(arr)/sizeof(int);

    std::cout<<"l_search: "<<l_search(arr , size , 45);

    return 0;
}