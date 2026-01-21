#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n, p, q;

    cout << "Enter the row of first array: "; cin >> m;
    cout << "Enter the col of first array: "; cin >> n;
    cout << "Enter the row of second array: "; cin >> p;
    cout << "Enter the col of second array: "; cin >> q;

    if (n != p) {
        cout << "Error dimensions !";
        return 0;
    }

    int a[m][n], b[p][q], c[m][q];

    cout << "Enter the elements of first array:\n";
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    cout << "Enter the elements of second array:\n";
    for (int i = 0; i < p; i++)
        for (int j = 0; j < q; j++)
            cin >> b[i][j];

    // multiplication
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            c[i][j] = 0; // must initialize
            for (int k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // printing result
    cout << "\nResultant Matrix:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
