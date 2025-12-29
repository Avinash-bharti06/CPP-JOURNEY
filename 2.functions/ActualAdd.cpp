#include <iostream>
using namespace std;
void fun(int x,int y)//formal parameter
{
    cout<<"Address of x is:" <<&x<< endl;
    cout<<"Address of y is:" <<&y<< endl;

}

int main(){
    int x;
    int y;
    cout<<"Address of x is:" <<&x<< endl;
    cout<<"Address of y is:" <<&y<< endl;
    fun(x,y);//actual parameter
    return 0;
}