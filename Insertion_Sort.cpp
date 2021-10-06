#include<iostream>
using namespace std;

int main ()
{
   int arr[5];
    for (int a = 0; a < 5; a++)
    {
        cout << "Enter " << a+1 << " element : ";
        cin >> arr[a];
    }
    cout<<"\nInput list is :\n";
    for(int i=0 ; i<5 ; i++)
    {
        cout << arr[i] << "\t";
    }
    for(int k = 1 ; k < 5 ; k++)
    {
        int temp = arr[k];
        int j= k-1;
        while(j>=0 && temp <= arr[j])
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
    arr[j+1] = temp;
    }
        cout<<"\n\nSorted list is :\n";
        for(int i = 0 ; i < 5 ; i++)
    {
    cout << arr[i] << "\t";
    }

}