//A string of even length and reverse the first halp of the string 
#include<bits/stdc++.h>
using namespace std;
int main (){
    string s;
    getline(cin,s);
    int n;n= s.length();
    //reverse first half
    reverse(s.begin(),s.begin() +n/2);
    cout<<s;
}
