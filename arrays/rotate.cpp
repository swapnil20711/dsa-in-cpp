#include <bits/stdc++.h>
using namespace std;

void printMatrix(vector<vector<int>> &matrix)
{
    int rows = matrix.size();
    int cols = matrix[0].size();
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void rotate(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    vector<vector<int>> ans(n, vector<int>(n));
    

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ans[j][n-i-1]=matrix[i][j];
        }
        
    }
    matrix=ans;
}

void rotateOptimal(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    

    // transpose the matrix
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            swap(matrix[i][j],matrix[j][i]);
        }
        
    }
    // reverse each row
    for (int i = 0; i < n; i++)
    {
        reverse(matrix[i].begin(),matrix[i].end());
    }
    
}

int main()
{
    vector<vector<int>> matrix = {{5, 1, 9, 11}, {2, 4, 8, 10}, {13, 3, 6, 7}, {15, 14, 12, 16}};
    rotate(matrix);
    printMatrix(matrix);
}