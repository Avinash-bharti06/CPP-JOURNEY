//shorting of 0s and 1s

#include <bits/stdc++.h>
using namespace std;
void sortzero(vector<int>&a){
    int n =a.size();
    int noo=0;
    int noz=0;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            noz ++;
        }
        else{ noo++;}
    }
    //filling element 
    for(int i=0;i<n;i++){
        if(i<noz){
            a[i]=0;
        }
        else a[i]=1;
    }
}
// method 2
void sorting(vector<int>&a){
    int n,i,j;
    n = a.size();
     i =0; j=n-1;
    while(i<j){
        if(a[j]==1)
        j--;
        if(a[i]==0) i++;
        if(a[i]==1 && a[j]==0){
            if(i>j){
                break;
            }
            // swap
            // a[i]=0;a[j]=1;i++;j--;
            int temp =a[i];
            a[i]=a[j];a[j]=temp;
        }
    }
}

int main(){
    //method 1 by two loop
    int n,i;
    cout<<"Enter the size \t";cin>>n;
    vector<int>a(n);
    //entry 
    cout<<"The the elements are : \n";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sortzero(a);
    sorting(a);
    cout<<"Sorted aaray is : \n";
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    
    return 0;
}
