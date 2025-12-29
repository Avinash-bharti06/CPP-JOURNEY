#include <iostream>
using namespace std;

int main(){
    int a=3;
    int*b= &a;

    // &---->address of operator
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;

    // * --->value of operator

    cout<<"The value of a is "<<*b<<endl;

    // for pointer of pointer value n address

    int**c = &b;
    cout<<"address of b is "<<c<<endl;
    cout<<"value of b is "<<*c<<endl;



    return 0;
}