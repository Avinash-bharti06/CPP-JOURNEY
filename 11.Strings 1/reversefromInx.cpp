//A string of  size greather than t and reverse the substracting from position 2 to 5 using inbuilt function
#include<bits/stdc++.h>
using namespace std;
int main (){
    string s = "Raghav";
              //012345
  
    reverse(s.begin() +1,s.begin() +4);//reverse from idx 1 to 3
    cout<<s;
}
