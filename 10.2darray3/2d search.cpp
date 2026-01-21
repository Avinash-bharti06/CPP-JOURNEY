#include <bits/stdc++.h>
using namespace std;
bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int i=0;
        int j =cols-1;
        while ( i<= rows -1 && j>=0){
            if(matrix[i][j]==target){
            return true;}
            else if(matrix [i][j]> target) j--;
            else i++;
        }
        return false;
    }
   
    int main() {
    int rows, cols;
    cout << "Enter rows and columns: ";
    cin >> rows >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    int target;
    cout << "Enter target to search: ";
    cin >> target;

    bool found = searchMatrix(matrix, target);

    if (found) {
        cout << "Target " << target << " found in the matrix.\n";
    } else {
        cout << "Target " << target << " not found in the matrix.\n";
    }
    return 0;
    }