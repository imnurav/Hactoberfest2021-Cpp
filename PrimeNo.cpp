#include<iostream>
using namespace std;
bool verifyPrime(int n);
int main()
{
  int T, n;
  cin>>T;
  while(T--)
  {
    cin>>n;
    if (verifyPrime(n))
      cout<<"PRIME"<<endl; 
    else 
      cout<<"NOT PRIME"<<endl; 
  }
  return 0;
}  
bool verifyPrime(int n)
{int c=2,flag=0;
if(n==0 |n==1) return false;
    while(n>=c*c)
    {
        if(n%c==0)
        {
            return false;
        }
        c=c+1;
    }
    return true;
    
}