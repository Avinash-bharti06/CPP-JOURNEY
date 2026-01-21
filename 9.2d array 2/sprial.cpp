#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n;

    cout << "Enter the row of array: ";
    cin >> m;
    cout << "Enter the col of array: ";
    cin >> n;

    // Entry of elements
    int a[m][n];

    cout << "Enter the elements of array:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    // PRINTING spiral
    int minr = 0, minc = 0;
    int maxr = m - 1, maxc = n - 1;

    while (minr <= maxr && minc <= maxc) {
        // → right
        for (int j = minc; j <= maxc; j++) {
            cout << a[minr][j] << " ";
        }
        minr++;

        // ↓ down
        for (int i = minr; i <= maxr; i++) {
            cout << a[i][maxc] << " ";
        }
        maxc--;

        // ← left
        if (minr <= maxr) {
            for (int j = maxc; j >= minc; j--) {
                cout << a[maxr][j] << " ";
            }
            maxr--;
        }

        // ↑ up
        if (minc <= maxc) {
            for (int i = maxr; i >= minr; i--) {
                cout << a[i][minc] << " ";
            }
            minc++;
        }
    }

    return 0;
}
