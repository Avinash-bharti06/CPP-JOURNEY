#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
};
void display1(Node *head){//irritavtive
    Node* temp=head;
    while(temp!=NULL){
        cout<< temp->val<<" ";
        temp=temp->next;
    }
}
void display2(Node *head){//recursive
   if(head==NULL) return ;
//    display2(head->next);reverse printing
   cout<<head->val<<" ";
   display2(head->next);
}
int main(){
  Node a;
  a.val=10;
  Node b;
  b.val=20;
  Node c;
  c.val=30;
  Node d;
  d.val=40;
  //forming
  a.next= &b;
  b.next= &c;
  c.next=&d;
  d.next=NULL; 
//   display1(&a);
  display2(&a);
  return 0;
}