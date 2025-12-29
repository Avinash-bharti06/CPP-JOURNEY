// Finding last occurrence of x in array
#include <bits/stdc++.h>
using namespace std;

int main() {
    int idx = -1;  // Initialize with -1 (means not found)
    int x, n;

    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> v(n);

    cout << "Enter the array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> v[i];   // ✅ Correct way
    }

    cout << "Enter the searching x: ";
    cin >> x;

    cout << "Entered array is: \n";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // Find last occurrence
    for (int i = 0; i < n; i++) {
        if (v[i] == x) {
            idx = i;
        }
    }

    if (idx != -1)
        cout << "Last occurrence of " << x << " is at index: " << idx << endl;
    else
        cout << x << " not found in array.\n";

    return 0;
}
