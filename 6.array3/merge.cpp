//merging of two sorted arrays 

#include <bits/stdc++.h>
using namespace std;
vector<int> merge(vector<int>&a1,vector<int>&a2){
int  n = a1.size();
int  m = a2.size();
vector<int>a(m+n);
int i=0;int j=0;int k=0;
while(i<n && j<m){
    if(a1[i]<a2[j]){
        a[k]=a1[i];
        i++;k++;
    }
    else {
        a[k]=a[j];
        j++;k++;
    }
    if(i==n){
        while(j<=m-1){
            a[k]=a2[j];
            j++;k++;
        }
    }
    if(j==m){
        while(i<=n-1){
            a[k]=a[i];
            k++;i++;
        }
    }

}
for(int i=0;i<m+n;i++){
    cout<<a[i]<<" ";
}
}

int main(){
    vector<int>a1;
    
    a1.push_back(1);
    a1.push_back(2);
    a1.push_back(3);
    a1.push_back(4);
    a1.push_back(5);

vector<int>a2;
   
    a2.push_back(7);
    a2.push_back(8);
    a2.push_back(9);
    a2.push_back(10);
    a2.push_back(11);
    a2.push_back(12);
    a2.push_back(13);


merge(a1,a2);


    return 0;
}