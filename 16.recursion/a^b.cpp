#include <bits/stdc++.h>
using namespace std;
int pow(int a,int b){
    if(b==0) return 1;
    return a*pow(a,b-1);
}
int main(){
    int a,b;
    cout<<"base"<<" ";cin>>  a;
    cout<<"power"<<" ";cin>> b;
    cout<<"a^b"<<" "<<pow(a,b);
    

    return 0;
}