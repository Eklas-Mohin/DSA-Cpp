#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    
    for (int i = 1; i < n; ++i) {
        int temp = arr[i];
        int idx = i - 1;

        while (idx >= 0 && arr[idx] > temp) {
            arr[idx + 1] = arr[idx];
            idx--;
        }
        arr[idx + 1] = temp;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {17, 23, 7, 59, 73, 13, 37, 53, 47};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Unsorted Array:" << endl;
    printArray(arr, n);

    insertionSort(arr, n);

    cout << "\nSorted Array:" << endl;
    printArray(arr, n);

    return 0;
}
