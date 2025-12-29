#include <iostream>
#include<vector>
using namespace std;


int main(){
    int n;
    cout<<"Enter the size of vector; ";cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    //output
    for(int i=0;i<n;i++){
        cout<<"The element at \t"<<(i+1)<<"=  "<<v[i]<<"\n";
    }
    //checking length and capacity
    cout<<"size is "<<v.size()<<endl;;
    cout<<"size is "<<v.capacity();

    return 0;
}