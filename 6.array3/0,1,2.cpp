#include <bits/stdc++.h>
using namespace std;
//two pass function
void sorting(vector<int>&a){
    int n = a.size();
    int noz=0;
    int noo=0;
    int notw=0;
    for(int i=0;i<n;i++){
        if(a[i]==0) noz++;
        else if(a[i]==1) noo++;
        else notw++;
    }
    //fill
    for(int i=0;i<n;i++){
        if(i<noz)a[i]=0;
        else if(i<=(noz+noo))
        a[i]=1;
        else a[i]=2;

    }
}
//single pass

void sorts(vector<int>&a){
    int lo=0;int mid=0;int hi=a.size()-1;
    while(mid<=hi){
        if(a[mid]==2){
            int temp= a[mid];
            a[mid]=a[hi];
            a[hi]=temp;
            hi--;
        }
        else if(a[mid]==0){
    int temp = a[mid];
    a[mid]=a[lo];
    a[lo]=temp;
    lo++; mid++;
          }

    else mid++;
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
    int method;
    cout<<"Choose method of sove 1 or 2nd : ";
    cin>>method;
    switch (method){
        case 1:
        cout<<"by method one /n";
        sorting(a);
    cout<<"Sorted aaray is : \n";
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";}
        break;

        case 2:
        cout<<"by method 2 \n";
        sorts(a);
    cout<<"Sorted aaray is : \n";
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";}
        break;
    default :
    cout<<"wrong value entered only enter 1 or 2: ";
    break;

    }
    
    return 0;
}