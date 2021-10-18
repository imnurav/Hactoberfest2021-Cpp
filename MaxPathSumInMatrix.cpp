// CPP program for finding max path in matrix
#include <bits/stdc++.h>
#define N 4
#define M 6
using namespace std;
 
// To calculate max path in matrix
int findMaxPath(int mat[][M])
{
 
    for (int i = 1; i < N; i++) {
        for (int j = 0; j < M; j++) {
 
            // When all paths are possible
            if (j > 0 && j < M - 1)
                mat[i][j] += max(mat[i - 1][j],
                             max(mat[i - 1][j - 1],
                             mat[i - 1][j + 1]));
 
            // When diagonal right is not possible
            else if (j > 0)
                mat[i][j] += max(mat[i - 1][j],
                             mat[i - 1][j - 1]);
 
            // When diagonal left is not possible
            else if (j < M - 1)
                mat[i][j] += max(mat[i - 1][j],
                             mat[i - 1][j + 1]);
 
            // Store max path sum
        }
    }
    int res = 0;
    for (int j = 0; j < M; j++)
        res = max(mat[N-1][j], res);
    return res;
}
 
// Driver program to check findMaxPath
int main()
{
     
    int mat1[N][M] = { { 10, 10, 2, 0, 20, 4 },
                     { 1, 0, 0, 30, 2, 5 },
                     { 0, 10, 4, 0, 2, 0 },
                     { 1, 0, 2, 20, 0, 4 } };
             
    cout << findMaxPath(mat1) << endl;
    return 0;
}