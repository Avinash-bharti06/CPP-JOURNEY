//stringstream class is ussed to extract words from a sentence and print them individually
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="raghav is a   maths teacher ";
    stringstream ss(s);
    string temp;
    while(ss>>temp){
        cout<<temp<<endl;
    }
}