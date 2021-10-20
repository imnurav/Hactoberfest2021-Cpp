//145 is a strong number because
//1! + 4! + 5! = 1 + 24 + 120 = 145
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter number : \n"; 
    cin>>n;
    int num=n,d,sum=0,fact;
    while(n)
    {
        fact=1;
        d=n%10;
        for(int i=d;i>=1;i--)
        {
            fact=fact*i;
        }      
        sum+=fact;    
        n=n/10;
    }
    
    if(sum==num)
    cout<<num<<" is a strong number";
    else
    cout<<num<<" is not a strong number";
    return 0;
}
/*OUTPUT
enter number :
40585
40585 is a strong number
*/
