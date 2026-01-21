#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }

};

int main(){
    //assign value
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    //linkig
    a.next= &b;//a->next=*a.next
    b.next=&c;
    c.next=&d;
    //printing
    
   Node temp =a;
  while(1){
    cout<<temp.val<<" ";
    if(temp.next==NULL)break;
    temp=*(temp.next);
  }
    
    return 0;
}