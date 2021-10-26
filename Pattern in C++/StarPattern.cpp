#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    //*Pattern Questions

    //* Q1.
    /*    ****                  //Rectangle Pattern
          ****
          ****
          ****
          ****  */


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    } 


    //* Q2.
    /*     *****                //Inverted Half Pyramid
           ****
           ***
           **
           *        */
    
    

           
    for (int i = 0; i < n; i++)
    {
        for (int j = (n-i); j > 0 ; j--)
        {
        cout<<"*";
        }
        cout<<endl;
        
    }
    

    //* Q3.
    /*     *      *             //Butterfly Pattern
           **    **
           ***  ***
           ********
           ********
           ***  ***
           **    **
           *      *        */       
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<"*";
        }
        int space = 2*n - 2*i;
        for (int j= 1; j <= space; j++)
        {
            cout<<" ";
        }
        for (int j = 1; j <=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<"*";
        }
        int space = 2*n - 2*i;
        for (int j= 1; j <= space; j++)
        {
            cout<<" ";
        }
        for (int j = 1; j <=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    

    //* Q4.
    /*           *              //Star Pattern
               * * *
             * * * * *
           * * * * * * *
           * * * * * * *
             * * * * *
               * * *
                 *           */

    for (int i = 1; i <= n; i++)
    {
        for (int k = 2*n-2*i; k >= 1; k--)
        {
            cout<<" ";
        }
        for (int j = 1; j <= (2*i-1) ; j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    for (int i = n; i >= 1; i--)
    {
        for (int k = 2*n-2*i; k >= 1; k--)
        {
            cout<<" ";
        }
        for (int j = 1; j <= (2*i-1) ; j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

    //* Q5.
    /*     *********        //Hollow Diamond inscribed in a Rectangle
           **** ****
           ***   ***
           **     **
           *       *
           *       *
           **     **
           ***   ***
           **** ****
           *********   */

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1 ; j++)
        {
            cout<<"*";
        }
        for (int k = 1; k <= 2*i-3; k++)
        {
            cout<<" ";
        }
        if (i == 1)
        {
            for (int j = 1; j <= n-1; j++)
            {
                cout<<"*";
            }
            
        }
        else
        {
            for (int j = 1; j <= n - i + 1; j++)
            {
                cout<<"*";
            }
        }
        
        
        cout<<endl;
        
    }
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout<<"*";
        }
        for (int k = 1; k <= 2*i-3; k++)
        {
            cout<<" ";
        }
        if (i == 1)
        {
            for (int j = 1; j <= n-1; j++)
            {
                cout<<"*";
            }
            
        }
        else
        {
            for (int j = 1; j <= n - i + 1; j++)
            {
                cout<<"*";
            }
        }
        cout<<endl;
        
    }

    //* Q6.
    /*    *        *            //Hollow Butterfly
          **      **
          * *    * *
          *  *  *  *
          *   **   *
          *   **   *
          *  *  *  *
          * *    * *
          **      **
          *        *      */


    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            cout<<"*";
            for (int k = 1; k <= 2*n-2; k++)
            {
                cout<<" ";
            }
            cout<<"*";
            
        }
        else
        {
            cout<<"*";
            for (int k = 1; k <= i-2; k++)
            {
                cout<<" ";
            }
            cout<<"*";
            for (int k = 1; k <= 2*n-2*i; k++)
            {
                cout<<" ";
            }
            cout<<"*";
            for (int k = 1; k <= i-2; k++)
            {
                cout<<" ";
            }
            cout<<"*";
            
        }
        cout<<endl;
        
    }
    for (int i = n; i >= 1; i--)
    {
        if (i == 1)
        {
            cout<<"*";
            for (int k = 1; k <= 2*n-2; k++)
            {
                cout<<" ";
            }
            cout<<"*";
            
        }
        else
        {
            cout<<"*";
            for (int k = 1; k <= i-2; k++)
            {
                cout<<" ";
            }
            cout<<"*";
            for (int k = 1; k <= 2*n-2*i; k++)
            {
                cout<<" ";
            }
            cout<<"*";
            for (int k = 1; k <= i-2; k++)
            {
                cout<<" ";
            }
            cout<<"*";
            
        }
        cout<<endl;
        
    }


    //* Q7.
    /*         +                //Plus Star Pattern
               +
               +
               +
           +++++++++
               +
               +
               +
               +              */
    
    for (int i = 1; i < 2*n; i++)
    {
        for (int j = 1; j < 2*n; j++)
        {
            if (i==n || j==n)
            {
                cout<<"+";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    //* Q8.
    /*  *       *               //X Star Pattern
         *     *
          *   *
           * *
            *
           * *
          *   *
         *     *
        *       *           */    

   for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < (2*n); j++)
        {
            if (j==i || j==(2*n)-i)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for (int i = n-1; i >= 1; i--)
    {
        for (int j = 1; j < (2*n); j++)
        {
            if (j==i || j==(2*n)-i)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    //* Q9.
    /*   ***            //Eight Star Pattern
        *   *
        *   *
        *   *
         *** 
        *   *
        *   *
        *   *
         ***            */
    
    for (int i = 1; i < 2*n; i++)
    {
        for (int j = 1; j <=n; j++)
        {
            if (i==1 || i==(2*n)-1 || i==n)
            {
                if (j==1 || j== n)
                {
                    cout<<" ";
                }
                else{
                    cout<<"*";
                }
            }
            else{
                if (j==1 || j==n)
                {
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }            
        }
        cout<<endl;
    }

    //* Q10.
    /*      *****     *****               //Heart Star Pattern
           *******   ******* 
          ********* *********
          *******************
           *****************
            ***************
             *************
              ***********
               *********
                *******
                 *****
                  ***
                   *              */

    int i,j;
    for (i = n/2; i < n; i+=2)
    {
        for (j = 1; j < n-i; j+=2)
        {
            cout<<" ";
        }
        for (j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        for (j = 1; j <= n-i; j++)
        {
            cout<<" ";
        }
        for (j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for (i = n; i >= 1; i--)
    {
        for (j = i; j < n; j++)
        {
            cout<<" ";
        }
        for (j = 1; j <= (i*2-1); j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}


#include <iostream>
using namespace std;


//Q10 full pyramid
/*      *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *            */


int main()
{
    int space, rows;

    cout <<"Enter number of rows: ";
    cin >> rows;

    for(int i = 1, k = 0; i <= rows; ++i, k = 0)
    {
        for(space = 1; space <= rows-i; ++space)
        {
            cout <<"  ";
        }

        while(k != 2*i-1)
        {
            cout << "* ";
            ++k;
        }
        cout << endl;
    }    
    return 0;
}
