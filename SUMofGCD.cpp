#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}
int main()
{
   ll n,sum=0;
   cin>>n;
   for(int i=1;i<=n;i++)
   {
       sum+=i*gcd(i,n);
   }
   cout<<sum;
   return 0;
}
