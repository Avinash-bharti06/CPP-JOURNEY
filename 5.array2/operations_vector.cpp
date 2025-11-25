#include <iostream>
#include<vector>
using namespace std;

/*operations in vector are 
push back--->adding
pop back--> removing 
size--->check size of array
capacity---->check the memory allocations of array
at --->do same as a[n]
sort-->arrange
*/


int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(10);
    v.push_back(15);
    v.push_back(25);
    v.push_back(55);
    v.pop_back();//remove from last
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";
    cout<<v[4]<<"\n ";
    //size
    cout<<"size or length of "<<v.size()<<"\n";//4
    //capacity is ;
    cout<<"The capacity is : "<<v.capacity();//8

}