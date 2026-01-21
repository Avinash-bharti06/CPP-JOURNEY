#include <bits/stdc++.h>
using namespace std;
// transpose of  array
int main(){
    int m;
    cout<<"Enter the size of matrix: ";cin>>m;
    int arr[m][m],i,j;
    cout<<"Enter the elements : \n";
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            cin>>arr[i][j];
        }
        
    }
    cout<<"The entered array is : \n";
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    // transpose of matrix
    int temp =0;
    cout<<"the transposed matrix is \n";
    for(int j=0;j<m;j++)
    {
        for(int i=0;i<m;i++){
            temp = arr[i][j];
           arr[i][j] = arr[j][i];
           arr[j][i]=temp;
        }
        
    }


    cout<<"the transposed matrix is \n";
    for(int j=0;j<m;j++)
    {
        for(int i=0;i<m;i++){
           cout<< arr[i][j]<<" ";
        }
        cout<<endl;
    }
   
    return 0;
}