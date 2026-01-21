#include <bits/stdc++.h>
using namespace std;
// transpose of  array
int main(){
    int m,n;
    cout<<"Enter the size of matrix: ";cin>>m>>n;
    int arr[m][n],i,j;
    cout<<"Enter the elements : \n";
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>arr[i][j];
        }
        
    }
    cout<<"The entered array is : \n";
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    // transpose of matrix
    cout<<"the transposed matrix is \n";
    for(int j=0;j<n;j++)
    {
        for(int i=0;i<m;i++){
           cout<< arr[i][j]<<" ";
        }
        cout<<endl;
    }
    // for(i=0;i<m;i++){
    //     for(j=0;j<n;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    return 0;
}