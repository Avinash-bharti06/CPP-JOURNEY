// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int old[6]={1,5,6,9,3,2};
    int news[6];
    int n= 6;
    int i=0,j=n-1;
    while(i<n/2 && j>=n/2){
    for(int k=0;k<n;k++){
        if(old[i]>old[j]){
            
            news[k]=old[j];
            j--;
            
        }
        else if(old[i]<=old[j]){
            
            news[k]=old[i];
            i++;
        }
        else{
            news[k]=old[i];
            i++;
        }
    
    }
    }
    for(int i=0;i<n;i++){
        cout<<news[i]<<" ";
    }

    return 0;
}