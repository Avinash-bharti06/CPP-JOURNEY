// 1 1 2 3 5 8 13 21 
#include <bits/stdc++.h>
using namespace std;
 
int fibo(int n){
    if(n==1 || n==2 ) return 1;
    return fibo(n-1)+fibo(n-2);

}
int main(){
    
    int n;
    cout<<"Enter the value of desired number: ";
    cin>>n;
    cout<<fibo(n);
    
    return 0;

}