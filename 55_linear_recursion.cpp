#include <iostream>
using namespace std;

int linearSearchRecursive(int arr[], int size, int index, int target) {

    if (index == size)
        return -1;

    if (arr[index] == target)
        return index;
    return linearSearchRecursive(arr, size, index + 1, target);
}

int main() {
    int arr[7] = {14, 78, 34, 89, 12, 90, 77};
    int target = 12;

    int index = linearSearchRecursive(arr, 7, 0, target);

    if (index != -1)
        cout << "Target found at index: " << index << endl;
    else
        cout << "Target not found." << endl;

    return 0;
}
