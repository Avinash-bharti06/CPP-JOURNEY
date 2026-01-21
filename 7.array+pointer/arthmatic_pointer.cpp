#include <iostream>
using namespace std;

int main(){
    int t;
    int marks[4]={12,13,16,8};
    int*p=marks;
    cout<<"The value of p is : "<<*p<<endl;
    cout<<"The value of p+1 is : "<<*(p+1)<<endl;

    // by applying direct increment

    

    cout<<*(p++)<<endl;
    cout<<*(++p);




    return 0;
}