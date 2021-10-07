//Implementation of Heap Sort

#include <iostream>
using namespace std;

//Program by Siddharth Bhamare

void convertHeap(int arr[], int len, int x)
{
    int largest = x;
    int left = 2 * x + 1;
    int right = 2 * x + 2;

    if (left < len && arr[left] > arr[largest])
        largest = left;

    if (right < len && arr[right] > arr[largest])
        largest = right;

    if (largest != x)
    {
        swap(arr[x], arr[largest]);

        convertHeap(arr, len, largest);
    }
}

void HeapSort(int arr[], int len)
{
    for (int i = len / 2 - 1; i >= 0; i--)
        convertHeap(arr, len, i);

    for (int i = len - 1; i >= 0; i--)
    {
        swap(arr[0], arr[i]);
        convertHeap(arr, i, 0);
    }
}

void show(int arr[], int len)
{
    cout << "\nSorted Array is : ";
    for (int i = 0; i < len; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int i=0,n;
    cout <<"Enter size of Array : ";
    cin >>n;
    int arr[n];
    cout <<"Enter elements of Array : ";
    while(i<n)
    {
        cin>>arr[i];
        i++;
    }
    int m = sizeof(arr) / sizeof(int);

    HeapSort(arr, m);
    show(arr, m);
}