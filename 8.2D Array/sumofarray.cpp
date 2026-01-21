#include <bits/stdc++.h>
using namespace std;
// sum number in array
int main(){
    int m,n;
    cout<<"Enter the size of matrix: ";cin>>m>>n;
    int arr[m][n],i,j,brr[m][n];
    cout<<"Enter the elements of first array : \n";
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>arr[i][j];
        }
        
    }
    cout<<"Enter the elements of second array : \n";
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>brr[i][j];
        }
        
    }
    cout<<"The entered array is : \n";
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    for(i=0;i<m;i++){
        cout<<"\t";
        for(j=0;j<n;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;

}
cout<<"\n*************************************\n";
//declaring third matrix
int crr[m][n];
for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            crr[i][j]=arr[i][j]+brr[i][j];
        }
        cout<<endl;
}
//printing crr
for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<crr[i][j]<<" ";
        }
        cout<<endl;

}
return 0;
}