#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Tell the age : a"<< endl;
    cin>> age;
    
    // conditions strats here

    if (age>18){
        cout<<"You are eligible for voting "<<endl;
    }

    else if (age==18){
        cout<<"You can apply for voter id"<<endl;
    }
    else {
        cout<<"You are not eligible"<<endl;
    }
}