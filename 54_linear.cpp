#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target)
            return i;
    }
    return -1;
}

int main() {
    int arr[7] = {14, 78, 34, 89, 12, 90, 77};
    int target = 12;
    int index = linearSearch(arr, 7, target);

    cout << "Target found at index: " << index << endl;
    return 0;
}
