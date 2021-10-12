//QuickSort is a Divide and Conquer algorithm.
//Comments in the code: if pivot was taken as last element(the changes that need to be done, in the code.)
//This code is for pivot,taken as starting element.

/*
    Time Complexity(Best Case): O(n*logn) 
    Time Complexity(Worst Case): O(n^2)
    Space Complexity: O(log n)
*/
#include <bits/stdc++.h>

using namespace std;
void swap(int &x,int &y)
{
    int t=x;
    x=y;
    y=t;
}
void Display(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "]:" << a[i] << endl;
    }
    cout << endl;
}

//Partition of Arrays Logic
int Partition(int a[],int l,int h)
{
    int pivot=a[l]; //int pivot=a[h];
    int i=l,j=h;
    while(i<j)
    {
        while(a[i]<=pivot)   //while(a[i]<pivot)
            i++;
        while(a[j]>pivot)   //(a[j]>=pivot)
            j--;
        if(i<j)
            swap(a[i],a[j]);
    }
    swap(a[l],a[j]);  //swap(a[h],a[i]);
    return j; //return i;
}

// Recursion Logic
void QuickSort(int a[],int l,int h)
{
    if(l<h)
    {
        int pos=Partition(a,l,h);
        QuickSort(a,l,pos-1);
        QuickSort(a,pos+1,h);
    }
}

int main()
{
    int n;
    cout<<"Enter no. of elements: ";
    cin>>n;
    cout<<"Enter elements"<<endl;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cout<<"a["<<i<<"]:";
        cin>>a[i];
    }
    cout <<endl<<"Original Array" << endl;
    Display(a,n);
    cout<<endl<<"Sorted Array"<<endl;
    QuickSort(a,0,n-1);
    Display(a,n);
    return 0;
}
