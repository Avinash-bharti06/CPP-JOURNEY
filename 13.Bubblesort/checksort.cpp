#include<bits/stdc++.h>
using namespace std;

void sorting(vector<int>&arr){
 bool flag=true;
 int n= arr.size();
 for(int i=0;i<n-1;i++){
    if(arr[i]>arr[i+1]) {
        flag = false;
        break;
    }
 }
 if(flag==true){
    cout<<"sorted";
 }
 else cout<<"unsorted";

}
int main(){
    vector<int>v;
    int n;
    cout<<"Enter the size of array: ";cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);

    }
    sorting(v);
    return 0;
    
}