#include <bits/stdc++.h>

using namespace std;

int main() {
    int arr[] = {17, 23, 7, 59, 73, 13, 37, 53, 47};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Unsorted Array:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << ' ';
    }
    cout << endl;

    for (int i = 0; i < n - 1; ++i) {
        int swaps = 0;
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swaps += 1;
            }
        }
        if (!swaps) break;
    }
    
    cout << "\nSorted Array:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << ' ';
    }
    cout << endl;

    return 0;
}
