#include <bits/stdc++.h>
using namespace std;
//counting vowels 
int main(){
    for(int j=0;j<3;j++){
    string s;
    cout<<"Enter the line : \n";
    getline(cin,s);// it take a line as entry
   int  count =0;
    int i=0;
    while(s[i]!='\0'){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
            count ++;}
            
        i++;
    }
    cout<<"Number of vowels in this line is: " <<count<<"\n";
}
    return 0;
}