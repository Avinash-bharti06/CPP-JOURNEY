#include <iostream>
using namespace std;

int a = 9; // global variable

void fun(int x, int y) {
    double b = (double)y / x; // type casting to double
    int a = x * y;            // local variable
    cout << a << endl;
    cout << b << endl;
}

void glo() {
    cout << a; // accessing global variable
}

int main() {
    fun(35, 7);
    glo();
    return 0;
}
