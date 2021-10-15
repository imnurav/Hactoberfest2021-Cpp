//* Don't Burn Your Opportunities just for Temporary Happiness
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    //*Pattern Questions

    //* Q1.
    /*  ABCDEDCBA                //Alphabet Pattern 1
        ABCD DCBA
        ABC   CBA
        AB     BA
        A       A              */ 

    int t;
    for (int i = 1; i <= n; i++)
    {
        char a = 'A';
        for (int j = n; j >= i; j--)
        {
            cout<<a;
            a++;
        }
        for (int k = 1; k <= ((2*i)-3); k++)
        {
            cout<<" ";
        }
        a--;
        if (i<=2)
        {
          t=i+3;  
          if (i==1)
          {
              a--;
          }
        }else{
            t=n;
        }
        
        for (; t >= i; t--)
        {   
            cout<<a;
            a--;
        }
        cout<<endl;
    }

    //* Optimised Solution

    for (int i = 1; i <= n; i++)
    {
        char k = 'A';
        for (int j = 1; j <= (2*n)-1; j++)
        {
            if (j<=(n+1)-i || j>= (n-1)+i)
            {
                cout<<k;
                if (j<n)
                {
                    k++;
                }else{
                    k--;
                }
            }else{
                cout<<" ";
                if (j==n)
                {
                    k--;
                }
            }
        }
        cout<<endl;
    }

    //* Q2.
    /*  A               //Alphabet Pattern 2
       ABA
      ABCBA
     ABCDCBA
    ABCDEDCBA           */

    for (int i = 1; i <= n; i++)
    {
        char k='A';
        for (int j = 1; j <= (2*n)-1; j++)
        {
            if (j>= n-i+1 && j<= (n+i)-1)
            {
                cout<<k;
                if (j<n)
                {
                    k++;
                }else{
                    k--;
                }
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    //* Q3.
    /*  A1              //Alphabet Number Pattern 1
       AB12
      ABC123
     ABCD1234
    ABCDE12345          */   

    for (int i = 1; i <= n; i++)
    {
        char k='A';
        int t=1;
        for (int j = 1; j <= 2*n; j++)
        {
            if (j>=n-i+1 && j<= n+i)
            {
                if (j<=n)
                {
                    cout<<k;
                    k++;
                }
                else{
                    cout<<t;
                    t++;
                }
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    //* Q4.
    /*  1               //Alphabet Number Pattern 2
       12A
      123AB
     1234ABC
    12345ABCD           */   

    for (int i = 1; i <= n; i++)
    {
        char k='A';
        int t=1;
        for (int j = 1; j <= (2*n)-1; j++)
        {
            if (j>= n-i+1 && j<= n+i-1)
            {
                if (j<=n)
                {
                    cout<<t;
                    t++;
                }
                else{
                    cout<<k;
                    k++;
                }
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    

    //* Q5.
    /*  A               //Alphabet Pattern 3
       CB
      FED
     JIHG
    ONMLK               */

    for (int i = 1; i <= n; i++)
    {
        char k='A';
        k += (i*(i+1)-2)/2;
        for (int t = 1; t <= n-i; t++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= i; j++)
        {
          cout<<k;
          k--;  
        }
        cout<<endl;
    }


    //* Q6.
    /*  ABCDEFG             //Alphabet Pattern 4
        ABC EFG
        AB   FG
        A     G             */

    for (int i = 1; i <= n; i++)
    {
        char k='A';
        for (int j = 1; j <= 2*n-1; j++)
        {
            if ((j>= n+i-1) || (j<=n-i+1))
            {
                cout<<k;
            }
            else{
                cout<<" ";
            }
            k++;
        }
        cout<<endl;
    }

    //* Q7.
    /*  1            //Alphabet Number Pattern 3
       A B
      1 2 3
     A B C D         */

    for (int i = 1; i <= n; i++)
    {
        int t=1;
        char k='A';
        for (int j = 1; j <= 2*n-1; j++)
        {
            if (i%2==0)
            {
                if (j>=n-i+1 && j<=n+i-1 && j%2!=0)
                {
                    cout<<k;
                    k++;
                }else{
                    cout<<" ";
                }
            }
            else{
                if (j>=n-i+1 && j<=n+i-1 && j%2==0)
                {
                    cout<<t;
                    t++;
                }else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}