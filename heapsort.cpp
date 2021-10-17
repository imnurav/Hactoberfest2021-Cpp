#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void heapify(int arr[], int index, int n)
{
    int l = 2 * index + 1;
    int r = 2 * index + 2;
    int largest = index;
    if (l < n && arr[l] > arr[largest])
    {
        largest = l;
    }
    if (r < n && arr[r] > arr[largest])
    {
        largest = r;
    }
    if (index != largest)
    {
        swap(arr[index], arr[largest]);
        heapify(arr, largest, n);
    }
}

void heapsort(int arr[], int n)
{
    int i;
    for (i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, i, n);
    }
    for (i = n - 1; i > 0; i--)
    {
        swap(arr[0], arr[i]);
        heapify(arr, 0, i);
    }
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;

    int arr[] = {2, 4, 1, 5, 6, 3};
    heapsort(arr, 6);
}