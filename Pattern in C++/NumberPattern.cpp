#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    //*Pattern Questions

    //* Q1.
    /*    1                 //Half Pyramid using numbers
          22
          333
          4444
          55555   */

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < (i+1) ; j++)
        {
            cout << i;
        }
        cout << endl;
    }  

    //* Q2.
    /*    1                   //Floyd's Triangle
          2 3
          4 5 6
          7 8 9 10
          11 12 13 14 15    */

    int k = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    } 

    //* Q3.
    /*     1                //0-1 Pattern
           0 1
           1 0 1
           0 1 0 1
           1 0 1 0 1    */

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout<<"1"<<" ";
            }
            else
            {
                cout<<"0"<<" ";
            }
            
        }
        cout<<endl;
    }

    //* Q4.
    /*             1               //Palindromic Pattern
                 2 1 2
               3 2 1 2 3
             4 3 2 1 2 3 4
           5 4 3 2 1 2 3 4 5      */

    for (int i = 1; i <= n; i++)
    {
        for (int k = 2*n-2*i; k >=1; k--)
        {
            cout<<" ";
        }
        for (int j = i; j >=1; j--)
        {
            cout<<j<<" ";    
        }
        if (i>1)
            {
                for (int j = 2; j <= i; j++)
                {
                    cout<<j<<" ";
                }
                
            }
        cout<<endl;      
        
    }    

    //* Q5.
    /*          1               //Pascal's Triangle
               1 1
              1 2 1
             1 3 3 1
            1 4 6 4 1 */

    int a = 1;
    for (int i = 0; i < n; i++)
    {
        for (int k = 1; k <= n-i; k++)
        {
            cout<<" ";
        }

        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
            {
                 a = 1;
            }
            else
            {
                 a = (a * (i-j+1))/j;
            }
            cout<<a<<" ";
        }
            cout<<endl;    
    }

    //* Q6.
    /*     10101            //Chessboard Number Pattern
           01010
           10101
           01010
           10101        */

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i%2==0)
            {
                if (j%2 == 0)
                {
                    cout<<1;
                }
                else{
                    cout<<0;
                }
            }else{
                if (j%2 == 0)
                {
                    cout<<0;
                }
                else{
                    cout<<1;
                }
            } 
        }
        cout<<endl;
    }

//Another Method
    int k = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (k==1)
            {
                cout<<1;
            }
            else{
                cout<<0;
            }
            k *= -1;
        }
        if (n%2==0)
        {
            k *= -1;
        }
        cout<<endl;
    }

    //* Q7.
    /*  54321           //Number Pattern
        54322
        54333
        54444
        55555           */

    for (int i = 1; i <= n; i++)
    {
        int k = n;
        for (int t = n-i; t >= 0; t--)
        {
            cout<<k;
            k--;
        }
        for (int j = 1; j < i; j++)
        {
            cout<<i;
        }
        cout<<endl;
    }

    //* Q8.
    /*  1                   //Number Pattern 2
        32
        456
        10987
        1112131415         */

    int k=0;
    int s;
    for (int i = 1; i <= n; i++)
    {
        if (i%2==0)
        {
            s = k+i;
        }else{
            s = k+1;
        }       
        for (int j = 1; j <= i; j++)
        {
            cout<<s;
            if (i%2==0)
            {
                s--;
            }else{
                s++;
            }
            k++;
        }
        cout<<endl;
    }

        //* Q9.
        /*  555555555           //Number Pattern 3
            544444445
            543333345
            543222345
            543212345
            543222345
            543333345
            544444445
            555555555          */

    for (int i = 1; i <= n; i++)
    {
        int k=n;
        for (int j = 1; j < i; j++)
        {
            cout<<k;
            k--;
        }
        for (int s = 0; s < (2*(n-i)) + 1; s++)
        {
            cout<<n-i+1;
        }
        int m = n-i+2;
        for (int t = 1; t < i; t++)
        {
            cout<<m;
            m++;
        }
        cout<<endl;
    }
    for (int i = n; i >= 2; i--)
    {
        int k=n;
        for (int j = 1; j < i; j++)
        {
            cout<<k;
            k--;
        }
        for (int s = 0; s < (2*(n-i)) + 1; s++)
        {
            cout<<n-i+2;
        }
        int m = n-i+2;
        for (int t = 1; t < i; t++)
        {
            cout<<m;
            m++;
        }
        cout<<endl;
    }

    //* Q10.
    /*  1 2 3 4 5               //Spiral Number Pattern
        16 17 18 19 6
        15 24 25 20 7
        14 23 22 21 8
        13 12 11 10 9        */

    int a=1;
    int arr[n][n];
    
    int row_start=0;
    int row_end=n-1;
    int col_start=0;
    int col_end=n-1;

    while (row_start <= row_end && col_start<=col_end)
    {
        for (int col = col_start; col <= col_end; col++,a++)
        {
            arr[row_start][col] = a;            
        }
        row_start++;
        for (int row = row_start; row <= row_end; row++,a++)
        {
            arr[row][col_end] = a;
        }
        col_end--;
        for (int col = col_end; col >= col_start; col--,a++)
        {
            arr[row_end][col] = a;
        }
        row_end--;
        for (int row = row_end; row >= row_start; row--,a++)
        {
            arr[row][col_start] = a;            
        }
        col_start++;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}