#include <bits/stdc++.h>
using namespace std;

int main(){
    //declaration of 2d array 
    int arr[3][3];
    // 3 rows and 3 column
    // arr[1][1]=5;//filling of first row and first coulmn
    // arr[1][2]=10;//filling of first row and second coulumn
    // cout<<arr[1][1]<<" "<<arr[1][2];

// using of loop 
for(int i=0;i<3;i++)// for creating rows 
{ for (int j=0;j<3;j++){// for creating columns
 cin>>arr[i][j];
}
}
//for output
cout<<"Entered array elements are : \n";
for(int i=0;i<3;i++)// for creating rows 
{ for (int j=0;j<3;j++){// for creating columns
 cout<<arr[i][j]<<" ";
}
cout<<endl;


}
    return 0;
}