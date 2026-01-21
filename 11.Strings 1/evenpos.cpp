#include <bits/stdc++.h>
using namespace std;
// string of size n and upadating all the even positon int the string to character a and consider 0 based indexing
int main(){
    string s;
    getline(cin,s);
 for(int i=0;s[i]!='\0';i++){
 if(i%2==0)
 {s[i]='a';
 }
}
    cout<<s<<endl;

    return 0;
}