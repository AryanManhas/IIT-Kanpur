#include<iostream>
using namespace std;

void bubbleSort(int arr[] , int size)
{
    int i = 0;
    while( i < size)
    {
        for(int j=0; j<size-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[i], arr[j]);
            }
        }

        i++;
    }
}

int main(){
	
	int arr[6] = {10, 19, 13, 18, 17, 14};
	
	bubbleSort( arr, 6 );
	
	int i=0;
	while( i != 6 ){
		
		cout<< arr[i]<<" ";
		i++;
	}
	
    return 0;
}