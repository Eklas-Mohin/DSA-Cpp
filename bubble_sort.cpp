#include <iostream>
#include <algorithm>

using namespace std;

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int swaps = 0;

        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swaps++;
            }
        }

        if (swaps == 0) break;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() {
    int arr[] = {17, 23, 7, 59, 73, 13, 37, 53, 47};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Unsorted Array:\n";
    printArray(arr, size);

    bubbleSort(arr, size);

    cout << "\nSorted Array:\n";
    printArray(arr, size);

    return 0;
}
