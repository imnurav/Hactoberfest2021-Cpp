es (48 sloc) 1.1 KB
#include <bits/stdc++.h>
using namespace std;
//Find number of occurrences using recursive binary search for sorted array
int binsel(int arr[],int l,int h,int x)
{
    if(h>=l) 
    {
        int mid=l+(h-l)/2;// l+h/2 causes overloading
        if ((mid==0 || x>arr[mid-1]) && arr[mid]==x)
        return mid;
        else if (x>arr[mid])
            return binsel(arr,mid+1,h,x);
        else
            return binsel(arr,l,mid-1,x);
    }
    return -1;
}

int binser(int arr[],int l,int h,int x)
{
    int n;
    n=sizeof(arr)/sizeof(int);
    if (h>=l) 
    {
        int mid = l+(h-l)/2;
        if ((mid==n-1 || x<arr[mid+1]) && arr[mid]==x)
            return mid;
        else if (x<arr[mid])
            return binser(arr,l,mid-1,x);
        else
            return binser(arr,mid+1,h,x);
    }
    return -1;
}
 
// Driver program
int main()
{
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int x;
    cin>>x;
    int left=binsel(arr,0,n - 1, x);
    int right=binser(arr,0,n - 1, x);
    cout<<"The number of occurences of "<<x<<" is "<<(right-left)+1;
    return 0;
}
