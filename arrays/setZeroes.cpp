#include <bits/stdc++.h>
using namespace std;

void markRows(vector<vector<int>> &matrix, int rowNum)
{
    int cols = matrix[rowNum].size();

    for (int j = 0; j < cols; j++)
    {
        if (matrix[rowNum][j] != 0)
        {
            matrix[rowNum][j] = -1;
        }
    }
}

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

void markCols(vector<vector<int>> &matrix, int colNum)
{
    int rows = matrix.size();

    for (int i = 0; i < rows; i++)
    {
        if (matrix[i][colNum] != 0)
        {
            matrix[i][colNum] = -1;
        }
    }
}
void setZeroes(vector<vector<int>> &matrix)
{
    int rows = matrix.size();
    int cols = matrix[0].size();
    vector<vector<int>> copy(matrix);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] == 0)
            {
                markRows(matrix, i);
                markCols(matrix, j);
            }
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] == -1 && copy[i][j] != matrix[i][j])
            {
                matrix[i][j] = 0;
            }
        }
    }

    printMatrix(matrix);
}

void setZeroesBetter(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();

    vector<int> col(m, 0);
    vector<int> row(n, 0);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (row[i] || col[j])
            {
                matrix[i][j] = 0;
            }
        }
    }

    printMatrix(matrix);
}

void setZeroesOptimal(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();
    int col0 = 1;

    // vector<int> col(m,0); -> matrix[0][..]
    // vector<int> row(n,0); -> matrix[..][0]

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                // mark the ith row
                matrix[i][0] = 0;
                // mark the jth col
                if (j != 0)
                {
                    matrix[0][j] = 0;
                }
                else
                {
                    col0 = 0;
                }
            }
        }
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {

            if (matrix[i][j] != 0)
            {
                if (matrix[i][0] == 0 || matrix[0][j] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }

    if (matrix[0][0] == 0)
    {
        for (int j = 0; j < m; j++)
        {
            matrix[0][j] = 0;
        }
    }

    if (col0 == 0)
    {
        for (int i = 0; i < n; i++)
        {
            matrix[i][0] = 0;
        }
    }

    printMatrix(matrix);
}
int main()
{
    vector<vector<int>> matrix = {{1, 1, 1, 1}, {1, 0, 1, 1}, {1, 1, 0, 1}, {0, 1, 1, 1}};
    setZeroesOptimal(matrix);
}