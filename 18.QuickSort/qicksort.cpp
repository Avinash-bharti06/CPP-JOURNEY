#include <bits/stdc++.h>
using namespace std;

// ---------------- Partition Using Count Method ----------------
int partitionCount(int arr[], int si, int ei) {

    int pivotElement = arr[si];
    int count = 0;

    // Step 1: Count elements <= pivot
    for (int i = si + 1; i <= ei; i++) {
        if (arr[i] <= pivotElement) 
            count++;
    }

    // Step 2: Calculate pivot index
    int pivotIdx = si + count;

    // Step 3: Swap pivot to its correct position
    swap(arr[si], arr[pivotIdx]);

    // Step 4: Partition around pivot
    int i = si;
    int j = ei;

    while (i < pivotIdx && j > pivotIdx) {

        // Move i forward
        if (arr[i] <= pivotElement) 
            i++;

        // Move j backward
        if (arr[j] > pivotElement) 
            j--;

        // Swap mismatch
       else if (arr[i]>pivotElement && arr[j]<=pivotElement) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    return pivotIdx;
}

// ------------------------ Quick Sort --------------------------
void quicksort(int arr[], int si, int ei) {
    if (si >= ei) return;   // Base case

    int pi = partitionCount(arr, si, ei);

    quicksort(arr, si, pi - 1);  // Left part
    quicksort(arr, pi + 1, ei);  // Right part
}

// ------------------------- Main Function -----------------------
int main() {

    int arr[] = {5, 1, 8, 2, 7, 6, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    quicksort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int x : arr) cout << x << " ";

    return 0;
}
