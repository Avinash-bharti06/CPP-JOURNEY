#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,5,10};
    int n= sizeof(arr)/sizeof(arr[0]);

    // Build prefix sum
    for(int i=1;i<n;i++){
        arr[i] += arr[i-1];
    }

    int idx = -1;

    // find index where sum(left) == sum(right)
    for(int i=1;i<n;i++){
        if(2 * arr[i] == arr[n-1]){
            idx = i;
            break;
        }
    }

    if(idx != -1)
        cout << "Can be partitioned after index: " << idx;
    else
        cout << "Can't be partitioned";

    return 0;
}
