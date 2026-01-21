#include <bits/stdc++.h>
using namespace std;
//taking input from user
int main(){
    string s;
    // cin>>s;//it take only a character entry but 
    getline(cin,s);// it take a line as entry
    int i=0;
    while(s[i]!='\0'){
        cout<<s[i];
        i++;
    }
    return 0;
}