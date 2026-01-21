#include <bits/stdc++.h>
using namespace std;
int matrixscore(vector<vector<int>>&grid){
    int rows =grid.size();
    int cols =grid[0].size();
    //making first coulmn all 1s
    for(int i=0;i<rows;i++){
        if(grid[i][0]==0){
            //flip
            for(int j=0;j<cols;j++){
                if(grid[i][j]==0)grid [i][j]=1;
                else grid[i][j]=0;
            }
        }
    }
    //flip the coulms where noz >noo
    for(int j=0;j<cols;j++){
        int noz=0;
        int noo=0;
        for(int i=0;i<rows;i++){
            if(grid [i][j]==0)noz++;
            else noo++;
        }
        if(noz>noo){
            //flip
            for(int i=0;i<rows;i++){
                if(grid[i][j]==0)grid [i][j]=1;
                else grid[i][j]=0;
            }
        }
    }
    int sum =0;
    for(int i=0;i<rows;i++){
        int x =1;
        for(int j=cols-1;j>=0;j--){
            sum += grid[i][j]*x;
            x*=2;

        }
    }
    return sum;
    
}

int main(){
    int rows, cols;
    cout << "Enter rows and columns: ";
    cin >> rows >> cols;

    vector<vector<int>> grid(rows, vector<int>(cols));
    cout << "Enter the matrix elements (0 or 1):\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> grid[i][j];
        }
    }

    int result = matrixscore(grid);
    cout << "Maximum score after flipping: " << result << "\n";

    return 0;
}