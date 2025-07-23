#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int>& arr, int si, int li)
{
    int pivot = arr[li];
    int i = si - 1;

    for (int j = si; j < li; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[li]);
    return i + 1;
}

void quickSort(vector<int>& arr, int si, int li)
{
    if (si < li) {
        int pi = partition(arr, si, li);
        quickSort(arr, si, pi - 1);
        quickSort(arr, pi + 1, li);
    }
}

int main()
{
    vector<int> arr = {12, 56, 16, 23, 89, 90};
    quickSort(arr, 0, arr.size() - 1);

    for (auto i : arr) {
        cout << i << " ";
    }
    return 0;
}
