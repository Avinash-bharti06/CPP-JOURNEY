#include<bits/stdc++.h>
using namespace std;
class lower_upperbound {
    public:
int lowerbound(vector<int>&v,int target){
    int n= v.size();
    //binary search 
    int lo =0;
    int hi=n-1;
    while(lo<=hi){
        int mid=lo+((hi-lo)/2);
        if(v[mid]== target) return mid;
        else if(v[mid]>target) hi = mid-1;
        else lo=mid+1;

    }
    return v[hi];
}
int upperbound(vector<int>& v, int target) {
    int n = v.size();
    int lo = 0, hi = n;
    while (lo < hi) {
        int mid = lo + (hi - lo) / 2;
        if (v[mid] <= target) 
            lo = mid + 1;    // move right
        else 
            hi = mid;        // move left
    }
    return v[lo];  // index of first element greater than target
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
    cout<<endl;
    lower_upperbound a;
    cout<<"The lower bound of element is "<<a.lowerbound(v,target)<<endl;
    cout<<"The upper bound of element is "<<a.upperbound(v,target);

return 0;
}