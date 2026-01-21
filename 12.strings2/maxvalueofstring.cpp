#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string arr[]={"0123","0023","456","00182","940","2903"};
    int max =stoi(arr[0]); int idx=0;
    for(int i=0;i<5;i++){
        int x = stoi(arr[i]);
        if(x>max) {max =x;idx =i;}
    }
    cout<< max <<" "<<idx;

}
