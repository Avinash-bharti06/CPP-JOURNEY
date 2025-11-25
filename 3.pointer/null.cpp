#include <iostream>
using namespace std;

int main() {
    int *ptr = nullptr; // Null pointer (points nowhere)

    if (ptr == nullptr) {
        cout << "Pointer is null (not pointing to any variable)." << endl;
    }

    return 0;
}

