#include <bits/stdc++.h>
using namespace std;

int mx_array(int arr[], int n, int idx) {
    if(idx == n) return INT_MIN;
    return max(arr[idx], mx_array(arr, n, idx + 1)); // corrected arr[]
}

int main() {
    int arr[] = {2, 1, 6, 32, 50, 200}; // corrected
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << mx_array(arr, n, 0); // print result
    return 0;
}
