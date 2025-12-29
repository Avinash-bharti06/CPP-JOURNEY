//Reverse of aaray by using another array 

#include <bits/stdc++.h>
using namespace std;
void display(vector<int>&a){

for(int i =0;i<a.size();i++){
    cout<<a[i]<<" ";
}
cout<<endl;
}
int main(){
    int n,i;
    cout<<"Enter the size of array : ";cin>>n;
    vector<int>v1(n);
    for( i=0;i<n;i++){
        cin>>v1[i];
    }
    display(v1);
    vector<int>v2(n);
    for( i=0;i<n;i++){
        //i+j = size -1
        int j = n-1-i;
        v2[i]=v1[j];

    }
    display(v2);
    return 0;
}