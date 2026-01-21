// 1 1 2 3 5 8 13 21 
#include <bits/stdc++.h>
using namespace std;
 
int pow(int x,int n ){
    if(n==1) return x;
    if(n==0) return 1;
    if(n%2==0){
        return pow(x,n/2)*pow(x,n/2);

    }
    else return pow(x,n/2)*pow(x,n/2)*x;

}
int main(){
    
    int n,x;
    cout<<"Enter the value of desired number: ";cin>>x;
    cout<<"Enter the power of number: ";
    cin>>n;
    cout<<pow(x,n);
    
    return 0;

}