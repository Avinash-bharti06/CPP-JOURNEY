#include<iostream>
using namespace std;
int main(){
    double num1,num2;
    char op;
    cout<<"Enter the num1 : ";
    cin>>num1;
    cout<<"choose operator (+,-,*,/) : ";
    cin >> op;
    cout<<"enter the num2 : ";
    cin >> num2;

    // switch conditions
    switch (op)
    {
    case '+':
        cout<<"Result : "<< num1 + num2<<endl;
        break;
    case '-':
        cout<<"Result : "<< num1 - num2<<endl;
        break;
    case '*':
        cout<<"Result : "<< num1 * num2<<endl;
        break;
    case '/':
        cout<<"Result : "<< num1 / num2<<endl;
        break;
    default:
    cout<<"This is invalid choose";
        break;
    }

 return 0 ;

}