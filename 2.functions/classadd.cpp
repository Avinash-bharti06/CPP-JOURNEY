#include <iostream>
using namespace std;
class sum{
    int a,b,c;
    public:
    void input()
    {
        cout<<"Enter a" ;
        cin>>a;
        cout<<"Enter b";
        cin>>b;
    
    }
    void cal(){
        c = a*b;

    }
    void display(){
        cout<<"sum is "<<c;
    }

};
int main(){
    sum s;
    s.input();
    s.cal();
    s.display();
    return 0;


}