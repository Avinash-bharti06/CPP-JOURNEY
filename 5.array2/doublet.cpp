#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cout<<"Enter the number which is doublet : ";
    cin>>x;
    int n;
    cout<<"Enter the length of aaray ";cin>>n;
    cout<<"Enter the array elements : \n";
    vector <int>v(n);
    for(int i=0;i<n;i++){
       cin>>v[i];
    }cout << "Entered array is : \n";
    for(int i=0;i<n;i++){
    cout<<v[i]<<" ";}
    for(int i=0;i<n-3;i++){
        for(int j=i+1;j<=n;j++){
            if(v[i]+v[j]==x){
                cout<<"\n("<<i<<","<<j<<")"<<endl;
            }
        }
    }
    return 0;
}