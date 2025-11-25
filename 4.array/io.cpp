#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size fo array : ";
    cin>>n;
    int arr[n];
    //input
    for(int i=0;i<=n-1;i++){
        cout<<"Enter"<<" "<<i+1<<" "<<"elements of array ";
        cin>>arr[i];
    }
    //output
    for (int i=0;i<=n-1;i++)
    {
     cout<<arr[i]<<" ";
    }
    return 0;
}