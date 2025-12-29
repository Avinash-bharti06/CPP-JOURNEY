//wap to reverse array without using another array 


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
    vector<int>v(n);
    
    int temp;
    for( i=0;i<n;i++){
        cin>>v[i];
    }
    
    for( i=0;i<n/2;i++){
       temp= v[i];
       v[i]=v[n-1-i];
       v[n-1-i]=temp;

    }
   
    for( i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    
    return 0;
}