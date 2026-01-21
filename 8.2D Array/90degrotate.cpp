#include <bits/stdc++.h>
using namespace std;
// transpose of array
int main() {
    int m;
    cout << "Enter the size of matrix: ";
    cin >> m;
    int arr[m][m], i, j;

    cout << "Enter the elements : \n";
    for (i = 0; i < m; i++) {
        for (j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "The entered array is : \n";
    for (i = 0; i < m; i++) {
        for (j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // transpose of matrix (using extra array 'a')
    int a[m][m];
    for (i = 0; i < m; i++) {
        for (j = 0; j < m; j++) {
            a[j][i] = arr[i][j];  // ✅ correct assignment
        }
    }

    cout << "The transposed matrix is : \n";
    for (i = 0; i < m; i++) {
        for (j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
