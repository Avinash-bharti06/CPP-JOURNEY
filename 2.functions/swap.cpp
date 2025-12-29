#include <iostream>
using namespace std;

//swap without temp

void wotemp(){
    int a,b;
    cin>>a>>b;
    a = a+b;
    b= a-b;
    a=a-b;
    cout<<a<<" "<<b;
}


int main(){
    int a,b;
    cin>>a>>b;
    int temp =a ;
    a=b;
    b = temp;
    cout<<a<<" "<<b<<endl;
    cout<<"without temp : " ;wotemp();
return 0;
}