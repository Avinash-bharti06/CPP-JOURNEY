#include<bits/stdc++.h>
using namespace std;
int main(){
    string str ="raghav is a maths teacher .He is a  mentor is aswell";
    stringstream ss(str);
    string temp;
    vector<string>v;
    while(ss>>temp){
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
int maxcount=1;int count=1;
for(int i=1;i<v.size();i++){
    if(v[i]==v[i-1])count++;
    else count=1;
    maxcount = max(maxcount,count);
}
for(int i=1;i<v.size();i++){
    if(v[i]==v[i-1])count ++;
    else count=1;
    if(count==maxcount){
        cout<<v[i]<<" "<<count<<endl;
    }
}
return 0;
}