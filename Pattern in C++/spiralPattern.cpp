#include <bits/stdc++.h>
#define R 3
#define C 6
using namespace std;

void spiralPrint(int m, int n, int a[R][C])
{
    int i, k = 0, l = 0;

    // k - starting row index
    // m - ending row index
    // l - starting column index
    // n - ending column index
    // i - iterator

    while (k < m && l < n)
    {
        // This will print the first row from the remaining rows
        for (i = l; i < n; ++i)
        {
            cout << a[k][i] << ", ";
        }
        k++;

        // This will print the last column from the remaining columns
        for (i = k; i < m; ++i)
        {
            cout << a[i][n - 1] << ", ";
        }
        n--;

        // This will print the last row from the remaining rows
        if (k < m)
        {
            for (i = n - 1; i >= l; --i)
            {
                cout << a[m - 1][i] << ", ";
            }
            m--;
        }

        if (l < n)
        {
            for (i = m - 1; i >= k; --i)
            {
                cout << a[i][l] << ", ";
            }
            l++;
        }
    }
    cout << "\n";
}

int main()
{
    int a[R][C] = {
        {21, 22, 23, 24, 25, 26},
        {37, 38, 39, 30, 31, 32},
        {43, 44, 45, 46, 47, 48}};

    cout << "-----The spiral pattern is-----\n";

    spiralPrint(R, C, a);
    return 0;
}
