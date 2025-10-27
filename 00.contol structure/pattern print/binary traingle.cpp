#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter the lines : ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int a = (i % 2 == 0) ? 1 : 0;  // start value depends on row
        for (int j = 1; j <= i; j++) {
            cout << a;
            a = 1 - a;  // flip after every print
        }
        cout << endl;
    }
    return 0;
}
