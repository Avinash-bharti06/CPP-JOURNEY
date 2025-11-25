#include <iostream>
using namespace std;
void input(){
    int x,y;
    int*p=&x;
    int*q=&y;
    cout<<"Enter first number ; ";
    cin>>*p>>*q;
    cout<<*p+*q<<"\n";
    //also 
    cout<<"also x+y :" <<x+y;
}

int main(){
    int x =6;
    int y  = 7;
    int*p=&x;
    int*q =&y;
    cout<<"sum is :"<<*p+*q<<endl;
    input();
    return 0;
}