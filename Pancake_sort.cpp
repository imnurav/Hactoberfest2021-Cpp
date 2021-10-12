#include <bits/stdc++.h>
using namespace std;
bool isSorted(vector<int>& arr)
{
    if(arr.size()==0 || arr.size()==1)
    {
        return 1;
    }
    for(int i=1;i<arr.size();i++)
    {
        if(arr[i-1]>arr[i])
        {
            return 0;
        }
    }
    return 1;
}
void flip(vector<int>& arr,int k)
{
    int i=0,j=k-1;
    while(i<j)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j] = temp;
        i++;j--;
    }
}
    
vector<int> pancakeSort(vector<int>& arr) {
    vector<int> res;
    int k=0,j=0,index=-1,large=INT_MIN,n=arr.size();
    while(!isSorted(arr))
    {
        for(int i=0;i<n-j;i++)
        {
            if(large<arr[i])
            {
                large=arr[i];
                index=i;
            }
        }
        // bringing the largest values at head
        k=index+1;
        flip(arr,k);
        res.push_back(k);
        // fliping the head value at its sorted place
        k=n-j;
        flip(arr,k);
        res.push_back(k);
        j++;
        large=INT_MIN;
    }
    return res;
}
int main()
{
   int n;
   cout<<"Enter lenght of array : ";
   cin>>n;
   vector<int> v;
   cout<<"Enter elements in array : ";
   for(int i=0;i<n;i++)
   {
       int x;
       cin>>x;
       v.push_back(x);
   }
   pancakeSort(v);
   cout<<"\nSorted array : ";
   for(auto u: v)
   {
       cout<<u<<" ";
   }
   return 0;
}