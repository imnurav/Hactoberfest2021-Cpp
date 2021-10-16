#include <bits/stdc++.h>
using namespace std;

int specialArray(vector<int> &nums)
{
    // with complexity O(n log(n))
    //      sort(nums.begin(), nums.end());  // O(NlogN)
    // const int N = nums.size();
    // if (nums[0] >= N) return N;
    // int l = 1, r = N - 1;
    // while (l <= r) { // O(LogN) * O(1)
    //     int m = l + (r - l) / 2;
    //     if (nums[m] >= (N - m) && nums[m - 1] < (N - m)) return (N - m);
    //     else if (nums[m] >= (N - m)) r = m - 1;
    //     else l = m + 1;
    // }
    // return -1;

    // counting sort
    int count[102] = {0}, N = nums.size();
    for (int n : nums)
        count[min(n, N)]++;
    for (int i = N; i >= 0; i--)
    {
        count[i] = count[i + 1] + count[i];
        if (count[i] == i)
            return i;
    }
    return -1;
}

int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int temp; cin>>temp;
        v.push_back(temp);
    }
    cout<<specialArray(v)<<endl;
    return 0;
}
