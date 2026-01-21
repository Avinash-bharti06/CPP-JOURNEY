#include<bits/stdc++.h>
using namespace std;

// using four varialbe and just ways
int maze(int sr,int sc,int er,int ec){
    if(sr>er || sc>ec) return 0;
    if(sr== er && sc==ec )return 1;
    int rightways = maze(sr,sc+1,er,ec);
    int downways = maze(sr+1,sc,er,ec);
    int totalways = rightways + downways;
    return totalways;
}
//printing the ways to reach destination
void maze2(int sr,int sc,int er,int ec,string s){
    if(sr>er || sc>ec) return ;
    if(sr== er && sc==ec ){
        //destination reached;
        cout<<s<<endl;
        return ;
    }
    maze2(sr,sc+1,er,ec,s+'R');
    maze2(sr+1,sc,er,ec,s+'D');

}

// with 2 parameters
int maze3(int row,int col){
    if(row<1 || col<1) return 0;
    if(row==1 && col == 1) return 1;
    int rightway = maze3(row,col-1);
    int downway = maze3(row-1,col);
    int totalways = rightway+downway;
    return totalways;
}


int main(){
    int n,m,p,q;
    cout<<"Enter the starting row: "; cin>>n;
    cout<<"Enter the starting col: "; cin>>m;
    cout<<"Enter the ending row: "; cin>>p;
    cout<<"Enter the ending  col: ";cin>>q;

    int way ;
    cout<<"Enter the which funtion want to execute: ";
    cin>>way;
    switch(way){
        case 1:
        cout<<maze(n,m,p,q);
        break;

        case 2:
        maze2(n,m,p,q," ");
        break;

        case 3:
        cout<<maze3(n,m);

        default: 
        cout<<"Hi";
        break;

    }

}