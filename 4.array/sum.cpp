#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];

    // INPUT
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // SUM
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // OUTPUT
    cout << "Sum of array elements = " << sum;

    return 0;
}
