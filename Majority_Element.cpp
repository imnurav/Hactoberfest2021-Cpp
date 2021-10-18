#include<bits/stdc++.h>
using namespace std;
int findCandidate(int n, int a[])
{
    int index=0, count=1;
    for(int i=1; i<n; i++)
    {
        if(a[i]==a[index])
        {
            count++;
        }
        else
        {
            count--;
        }
        
        if(count==0)
        {
            index=i;
            count=1;
        }
    }
    
    return a[index];
}
int findMajorityElement(int n, int a[])
{
    int candidate = findCandidate(n,a);
    int count=0;
    
    for(int i=0; i<n; i++)
    {
        if(a[i]==candidate)
        {
            count++;
        }
    }
    
    if(count>(n/2))
    {
        return candidate;
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    
    int majEle = findMajorityElement(n,a);
    if(majEle==-1)
    {
        cout<<"NO MAJORITY ELEMENT"<<endl;
    }
    else
    {
        cout<<majEle<<endl;
    }
}