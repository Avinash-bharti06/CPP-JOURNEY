#include <bits/stdc++.h>
using namespace std;
// max number in array
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
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int max=0;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
        if(max<arr[i][j])
         {max = arr[i][j];}
            
        }
    }
    cout<<"The greates element is :"<< max;
    return 0;
}