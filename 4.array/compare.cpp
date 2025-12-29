/*GIVE AN ARRAY OF MARKS OF STUDENTS IF THE MARKS OF ANY STUDENT IS LESS THAN 35*/

#include <iostream>
using namespace std;

//alternate method by using this function
void fun(){
   int n;
   cout<<"Enter the number of student : ";
   cin>>n;
   int marks[n];
   cout<<"Enter the marks : ";
   //input
   for (int i=0;i<=n-1;i++){
    cin>>marks[i];
   }
   //ouput
   for(int j=0;j<=n-1;j++){
    if(marks[j]<35){
        cout<<marks[j]<<" ";
    }
   }
}

int main(){
    int marks[6];
    //input
    for(int i=0;i<=5;i++){
        cin>>marks[i];
    }
    for(int i=0;i<=5;i++){
        if(marks[i]<35){
            cout<<"The index of array is:  "<<i<<" ";
            cout<<"The marks is "<<marks[i]<<endl;
        }
    }
     cout<<"\n**********************************************\n";
    cout<<"The alternate method is implemented as : \n";
    cout<<"\n**********************************************\n";
    fun();

    return 0;
}