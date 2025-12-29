#include <bits/stdc++.h>
using namespace std;
void display(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void reversePart(int i,int j,vector<int>&v){
    while (i<j){
        int temp =v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;j--;
    }
}
int main(){
    int n;
    cout<<"Enter the size of array :";cin>>n;
    vector<int>v(n);
    cout<<"Enter the elements  of array : \n";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int k;
    cin>>k;
    if(k>n){
        k=(k%n);
    }
    reversePart(0,n-k-1,v);
    reversePart(n-k,n-1,v);
    reversePart(0,n-1,v);
    display(v);

    return 0;
}