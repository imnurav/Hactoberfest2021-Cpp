#include<iostream>
using namespace std;
int Binary_Search(int arr[],int n,int key)
{
    int s =0;
    int e = n-1;
    while(s<=e)
    {
        int mid = (s+e)/2;
        if(arr[mid]==key)
        {
            return mid;
        }

        else if(arr[mid] > key)
        {
            e = mid-1;
        }
        else {
            s = mid+1;
        }
    }

        return -1;
    }


int main()
{
    int n,k;
    cout<<"Enter size of array";
    cin>>n;
    cout<<"Enter Elements";
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<"Enter Key";
    cin>>k;
    cout<<Binary_Search(a,n,k);
}