#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"size of array is : ";
    cin>>n;
    int arr[n];
    
    //input
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max = arr[0];
    for(int i=0;i<=n-1;i++){
        if(max<arr[i]){
            max = arr[i];
            
        }
    }
    cout<<"The max is : "<<max<<"\n";
        int smax = arr[0];
        for(int i=0;i<n;i++){
            if(arr[i]!=max && smax<arr[i]){
                smax = arr[i];
                
            }
        }cout<<"smax is :" <<smax;
        

    return 0;
}