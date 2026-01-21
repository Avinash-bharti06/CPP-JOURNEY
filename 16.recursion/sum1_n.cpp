#include <bits/stdc++.h>
using namespace std;
void sum1_n(int sum,int n){
    if(n==0){
        cout<<sum<<endl;
        return ;
    }
    sum1_n(sum +n,n-1);
}

int main(){
    sum1_n(0,6);
    return 0;
}