#include <iostream>
#include <vector>
using namespace std;

class Array {
public:
    void arrin() {
        int n;
        cout << "Enter the size of array: ";
        cin >> n;

        vector<int> arr(n);
        cout << "Enter " << n << " elements: ";
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int max = arr[0];
        for (int i = 1; i < n; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }

        cout << "Maximum element = " << max << endl;
    }
};

int main() {
    Array d;
    d.arrin();   // ✅ function call
    return 0;
}
