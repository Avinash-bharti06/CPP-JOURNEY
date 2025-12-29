#include <iostream>
using namespace std;

int main(){
    int n;
    
    
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the element to be searched : ";
    cin>>x;
    //search
    bool flag =false;//checkmark
    for(int i = 0;i<=n-1;i++){
        if(arr[i]==x){
            flag = true;
            if(flag==true){
                cout<<"Element found in index number  : "<<i<<endl;
            }
            else{
                cout<<"Not found";
            }

        }
    }

    return 0;
}