//sorting of string using inbuilt string function
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    sort(s.begin(),s.end());
    cout<<s;
    //space will have priority
}