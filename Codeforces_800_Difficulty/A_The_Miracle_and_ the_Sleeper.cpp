#include<bits/stdc++.h>
 using namespace std;
 #define MOD 1000000007
 #define pb push_back
 typedef long long ll;
 typedef vector<int> vi;
 #define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
 int main()
 {
  fast_io;
   ll t;
   cin>>t;
   while(t--)
   {
     int l,r;
     cin>>l>>r;
     if(r/2>=l)
     {
       if(r%2==0)
         cout<<r/2-1<<endl;
         else
         cout<<r/2<<endl;
     }
     else
     cout<<r-l<<endl;
   }
   return 0;
 }
