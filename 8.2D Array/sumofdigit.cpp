#include <bits/stdc++.h>
using namespace std;
// sum number in array
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
    //printing of sum
    int sum =0;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            sum += arr[i][j];
        }
    }
    cout<<sum;
    return 0;
    

}