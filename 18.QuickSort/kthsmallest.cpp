#include <bits/stdc++.h>
using namespace std;

int partitionCount(int arr[], int si, int ei) {

    int pivotElement = arr[(si+ei)/2];
    int count = 0;

    // Step 1: Count elements <= pivot
    for (int i = si ; i <= ei; i++) {
        if(i==((si+ei)/2)) continue;
        if (arr[i] <= pivotElement) 
            count++;
    }

    // Step 2: Calculate pivot index
    int pivotIdx = si + count;

    // Step 3: Swap pivot to its correct position
    swap(arr[(si+ei)/2], arr[pivotIdx]);

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

int kthsmallest(int arr[],int si,int ei,int k){
    int pi = partitionCount(arr,si,ei);
    if(pi+1==k)return arr[pi];
    else if(pi+1<k) return kthsmallest(arr,pi+1,ei,k);
    else return kthsmallest(arr,si,pi-1,k );
}

// ------------------------- Main Function -----------------------
int main() {

    int arr[] = {2,9,5,4,11,35,90};
    int n = sizeof(arr) / sizeof(arr[0]);

    quicksort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int x : arr) cout << x << " ";
    cout<<endl;
    int k=4;
    cout<<kthsmallest(arr,0,n-1,k);

    return 0;
}
