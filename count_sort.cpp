#include <bits/stdc++.h>
using namespace std;
void countingSort(int arr[], int n)
{
    int largest = -1;
    for (int i = 0; i < n; i++)
    {
        largest = max(largest, arr[i]);
    }
    vector<int> freq(largest + 1, 0);
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }
    int j = 0;
    for (int i = 0; i <= largest; i++)
    {
        arr[j] = i;
        freq[i]--;
        j++;
    }
}
int main()
{
    int n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    countingSort(arr, n);
    cout << "after sorting: " << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}