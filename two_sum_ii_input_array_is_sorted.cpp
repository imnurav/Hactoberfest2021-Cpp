#include <bits/stdc++.h>
using namespace std;

int binary_search(vector<int> arr, int n, int target, int i)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            if (mid != i)
                return mid;
            else if (arr[mid - 1] == target)
                return mid - 1;
            else
                return mid + 1;
        }
        else if (arr[mid] > target)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

vector<int> twoSum(vector<int> &num, int target)
{
    int n = num.size();
    for (int i = 0; i < n; i++)
    {
        int temp = binary_search(num, n, target - num[i], i);
        if (temp != -1)
            return {i + 1, temp + 1};
    }
    return {-1, -1};
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, target;
        cin >> n >> target;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            v.push_back(temp);
        }
        vector<int> ans = twoSum(v, target);
        cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}
