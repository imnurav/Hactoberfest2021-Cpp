
//Memoization

#include<bits/stdc++.h>

using namespace std;
int knapsackrec(int W,int w[],int v[],int i,int **dp)
{
   if(i<0) return 0;
   if(dp[i][W]!=-1) return dp[i][W];
  if (w[i]>W) return dp[i][W]= knapsackrec(W,w,v,i-1,dp);
  else {
       
       dp[i][W]= max(v[i]+knapsackrec(W-w[i],w,v,i-1,dp),knapsackrec(W,w,v,i-1,dp));
  }
  return  dp[i][W];
}

  int knapsack(int W,int w[],int v[],int n)
 {
     int **dp;
     dp= new int*[n];
     for(int i=0;i<n;i++)
     dp[i]= new int[W+1];


    for(int i=0;i<n;i++)
    {
        for(int j=0 ;j<W+1;j++)
        {
         dp[i][j]=-1;
        }
    }  
    return knapsackrec(W,w,v,n-1,dp);   

 }
int main()
{  
      int v[]={60,100,120};
   int wt[]={10,20,30};
  int W = 50;
  cout<<knapsack(W,wt,v,3);

return 0;

}
