#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquare(int num)
{
    int low = 1, high = num;
    while (low <= high)
    {
        long long mid = low + (high - low) / 2;
        if ((mid * mid) == num)
            return 1;
        else if (mid * mid > num)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return 0;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<isPerfectSquare(n)<<endl;
    }
    return 0;
}
