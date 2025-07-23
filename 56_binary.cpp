#include<iostream>
using namespace std;

int binarysearch(int arr[], int s, int e, int target) {
    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }

    return -1;
}

int main() {
    int arr[7] = {12, 14, 34, 77, 78, 89, 90};
    int target = 77;

    int index = binarysearch(arr, 0, 6, target); 

    if (index != -1)
        cout << "Target found at index: " << index << endl;
    else
        cout << "Target not found." << endl;

    return 0;
}
