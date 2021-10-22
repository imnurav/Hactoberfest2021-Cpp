#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool findSub(string& x, string& y)
{
    ll n = x.size();
    ll m = y.size();

    ll srt = 0;

    for(ll i = 0; i < n; i++)
    {
        if(srt < m && y[srt] == x[i])
            srt++;

        if(srt == m)
            return 1;

    }

    return 0;

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);



    return 0;
}
