#include <iostream>
using namespace std;

int main(){
    int x =122;
    int *p = &x;
    cout<<"vlaue of x before update is : "<<x<<"\n";
    *p=6;
    cout<<"updated value of x is "<<x;

    return 0;
}