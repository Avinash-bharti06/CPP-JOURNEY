#include <iostream>
#include<vector>
using namespace std;


int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(10);
    v.push_back(15);
    v.push_back(25);
    v.push_back(55);
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";
    cout<<v[4]<<"\n ";
    //size
    cout<<"size or length of "<<v.size()<<"\n";//5
    //capacity is ;
    cout<<"The capacity is : "<<v.capacity();//8

    return 0;
}