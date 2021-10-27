#include <bits/stdc++.h>
using namespace std;

int factorial(int n){
    vector<int>dp(n+1);   //dp array where dp[i] = i!
    dp[0] = 1;
    for(int i=1;i<=n;i++){
        dp[i] = i*dp[i-1];   //n! = n * n-1!
    }
    return dp[n];
}
int main() {
    int n;
    cout <<"Enter number: ";
    cin >>n;
    cout <<n <<"! = " <<factorial(n);
}