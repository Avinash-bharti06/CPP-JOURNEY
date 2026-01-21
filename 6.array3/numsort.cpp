#include <bits/stdc++.h>
using namespace std;
void sort(vector<int>&a){
    int n,i,j;
    n = a.size();
    i =0;j=n-1;
    while(i<j){
        if(a[i]<0)i++;
        if(a[j]>0)j--;
        if(a[i]>0 && a[j]<0){
            if(i>j){
                break;
            }
            //swap
            int temp =a[i];
            a[i]=a[j];
            a[j]=temp;
            i++;j--;
        }
    }
}
int main(){
    int n,i;
    cout<<"Enter the size \t";cin>>n;
    vector<int>a(n);
    //entry 
    cout<<"The the elements are : \n";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    
    sort(a);
    cout<<"Sorted aaray is : \n";
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}