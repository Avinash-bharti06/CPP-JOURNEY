#include <iostream>
#include<vector>
using namespace std;


int main(){
    vector<int>v(5);
    cout<<v.size()<<"\n";//5
    cout<<v.capacity()<<"\n";//5
    //it fixed the capacity and length
    vector<int>g(5,7);
    //initaialize with size =5 and each element of vale of 7
    cout<<g[3]<<"\t"<<g[4];

    return 0;
}