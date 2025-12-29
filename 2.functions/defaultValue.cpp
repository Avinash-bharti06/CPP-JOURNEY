#include <iostream>
using namespace std;
void fun(int x=7,int y=8){
cout<<x<<endl;
cout<<y<<endl;

}
int main(){
    fun();//case -> intilize by 7 and 8
    fun(4,6);//case 2-> overwrite the 7 and 8 it has same memory
    fun(9);//case 3 --> take 9 instead 0f 7 as it is in order.
    
    
    return 0;
}