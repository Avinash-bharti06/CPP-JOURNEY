#include <bits/stdc++.h>
using namespace std;

int main() {
    int m;
    cout << "Enter the number of rows: ";
    cin >> m;

    vector<vector<int>> v;

    // Create rows with increasing sizes
    for (int i = 0; i < m; i++) {
        vector<int> a(i + 1); // row i has i+1 elements
        v.push_back(a);
    }

    // Generate Pascal's Triangle
    for (int i = 0; i < m; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                v[i][j] = 1;
            } else {
                v[i][j] = v[i - 1][j - 1] + v[i - 1][j];
            }
        }
    }

    // Print Pascal's Triangle
    for (int i = 0; i < m; i++) {
        for (int j = 0; j <= i; j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
