#include <iostream>
using namespace std;
int fact(int x){
    int f =1;
    for(int i =2;i<=x;i++){
        f *=i;}
        
        return f;
    }


int main(){
    int n;
    cout<<"Enter the value of N : ";
    cin>>n;
    int r;
    cout<<"Enter r : ";
    cin>>r;
    if(n>r){
    int nfact = fact(n);
    int rfact = fact(r);
    int nrfact = fact(n-r);
     int ncr = fact(n) / (fact(r) * fact(n-r));
    cout<<ncr;
    
    }
    else{
        cout<<"The condition does not met\n value of r never shoudl exceed the value of n";
    }

    
}