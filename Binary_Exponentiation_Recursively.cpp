#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

//This function will help you to calculate x to the power y in O(logn).

ll power(ll x, ll y, ll m)
{
    ll temp;
    if (y == 0)
    {
        return 1;
    }
    else
    {
        temp = power(x, y / 2, m);
        temp = (temp * temp) % m;
    }
    if (y % 2 == 1)
    {
        temp = (temp * x) % m;
    }
    return temp;
}

int main()
{
    ll x, y;
    cin >> x >> y;
    cout << power(x, y, M) << endl;
    return 0;
}