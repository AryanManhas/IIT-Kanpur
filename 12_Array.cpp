#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {10,20,30,40,50};

    // cout<<arr<<endl;

    // cout<<arr[2]<<endl;

    int i = 0;
    while(i !=5)
    {
        // printf("%d  \t", &arr[i]);
        // printf("%d  \t", &arr+1);
        // printf("%d  \t", arr+1);
        // printf("%d  \t", arr+i);
        // printf("%d  \t", *arr+i);
        printf("%d  \t", *(arr+i)); //arr+i pe rkhi hui value nikalta hai i.e dereferencing!!

        i++; //address+index*(size of variable)
    }

    return 0;

}

