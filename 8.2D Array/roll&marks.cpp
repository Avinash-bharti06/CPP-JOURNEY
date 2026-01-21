#include <bits/stdc++.h>
using namespace std;
// 4 students and marks and rollno
int main(){
    int arr[2][4],i,j;
    cout<<"Enter the name and roll no & Marks : \n";
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }cout<<"The entered marks is :\n";
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}