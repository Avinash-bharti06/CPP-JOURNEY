#include <bits/stdc++.h>
using namespace std;
void efficientsor(int arr[]) {
    int n = 6; // size fixed, but better to pass dynamically
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[]={5,4,6,3,2,1};
    
    // for(int i=0;i<n;i++){
    //    //traverse
    //    for(int j=0;j<n-1;j++){
    //     if(arr[j]>arr[j+1])//swap
    //     swap(arr[j],arr[j+1]);
    //    }
    // }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
   efficientsor(arr);
   return 0;

}
