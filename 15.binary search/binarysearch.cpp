#include<bits/stdc++.h>
using namespace std;
class A{
    public:
int binary_search(vector<int>&v, int target){
    int p = v.size();
    //binary search 
    int lo =0;
    int hi=p-1;
    while(lo<=hi){
        int mid=lo+((hi-lo)/2);
        if(v[mid]== target) return mid;
        else if(v[mid]>target) hi = mid-1;
        else lo=mid+1;

    }
    return -1;
}
};
int main(){
    vector<int>v;
    int target;
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
        
    }
    cout<<"Enter the target : ";cin>>target;
    cout<<"Entered array is : \n";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    A a;
    
    cout<<"\nThe index of element is found at :"<<a.binary_search(v,target);


}