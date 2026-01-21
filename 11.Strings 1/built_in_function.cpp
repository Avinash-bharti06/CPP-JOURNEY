#include<bits/stdc++.h>
using namespace std;
int main (){
    string s;
    getline(cin,s);
    cout<<"Entered string is : "<<s<<endl;
    cout<<"***************************************"<<endl;
    cout<<"1.size\n";
    cout<<"size of string is : "<<s.size()<<"\n";
     cout<<"***************************************"<<endl;
     cout<<"2.push_back"<<endl;
     cout<<"***************************************"<<endl;
     s.push_back('e');
     cout<<s<<"\n";
     cout<<"***************************************"<<endl;
     cout<<"3.popback"<<endl;
     s.pop_back();
     cout<<s<<endl;
     cout<<"***************************************"<<endl;
     cout<<"4.string addittion"<<endl;
     string c =" + added string";
     s = s + c;cout<<"\n";
     cout<<s<<endl;
     cout<<"***************************************"<<endl;
     cout<<s<<endl;
     cout<<"***************************************"<<endl;
     cout<<"5.Reverse "<<endl;
    reverse(s.begin(),s.end());
    cout<<s<<endl;
    cout<<"from specific index"<<endl;
   reverse(s.begin() + 2, s.end() - 3);
    cout<<s<<endl;
    cout<<"***************************************"<<endl;
     cout<<"6.substr "<<endl;
     cout<<s.substr(2)<<endl;
     cout<<s.substr(2,2)<<endl;//(index,length)
     cout<<"***************************************"<<endl;
     cout<<"7.To_string"<<endl;
     //converts integer to strings
     int x =  123;//printing integer as string
     string p = to_string(x);
     cout<<p<<endl;cout<<p.length();
  cout<<"\n***************************************\n"<<endl;


  
     


}