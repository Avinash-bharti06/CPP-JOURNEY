#include<bits/stdc++.h>
using namespace std;

// Merge function
void merge(vector<int>& a, vector<int>& b, vector<int>& res) {
    int i = 0; // pointer for a
    int j = 0; // pointer for b
    int k = 0; // pointer for res

    // Merge elements while both arrays have values
    while (i < a.size() && j < b.size()) {
        if (a[i] < b[j])
            res[k++] = a[i++];
        else
            res[k++] = b[j++];
    }

    // ❗ Copy leftover elements of a (if any)
    while (i < a.size()) {
        res[k++] = a[i++];
    }

    // ❗ Copy leftover elements of b (if any)
    while (j < b.size()) {
        res[k++] = b[j++];
    }
}

// Sorting function
void mergeSort(vector<int>& v) {
    int n = v.size();
    if (n == 1) return;  // base case

    int n1 = n / 2;
    int n2 = n - n1;

    vector<int> a(n1), b(n2);

    // Copy first half to a
    for (int i = 0; i < n1; i++) {
        a[i] = v[i];
    }

    // Copy second half to b
    for (int i = 0; i < n2; i++) {
        b[i] = v[i + n1];
    }

    // Recursive calls to sort both halves
    mergeSort(a);
    mergeSort(b);

    // Merge both sorted halves into v
    merge(a, b, v);
}

// Driver code
int main() {
    int arr[] = {5, 1, 3, 0, 4, 9, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    vector<int> v(arr, arr + n);  // copy array into vector

    mergeSort(v);  // ❗ missing earlier

    // Print sorted array
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    return 0;
}
