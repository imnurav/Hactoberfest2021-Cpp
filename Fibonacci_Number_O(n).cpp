#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll dp[100005];

ll fib(ll n)
{
    if (n <= 1)
    {
        return n;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }

    return dp[n] = fib(n - 1) + fib(n - 2);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    memset(dp, -1, sizeof(dp));
    cout << fib(n) << endl;

    return 0;
}