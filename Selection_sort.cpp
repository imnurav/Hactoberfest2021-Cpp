//selection Sort implementation 

#include <iostream>
using namespace std;

void selectionsort(int arr[],int n);

//Program By Siddharth Bhamare

int main()
{

    int arr[]={50,60,30,90,10,70,20};
    cout<<"\nUnsorted Given Array : 50 60 30 90 10 70 20\n";
    selectionsort(arr,sizeof(arr)/sizeof(int));
    return 0;
}

void selectionsort(int arr[],int n)
{
    int i,j,temp,min;
    
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
         if(arr[j]<arr[min])
         {
          min=j;
         }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp; 
    }
    
    cout<<"\nSorted Array : ";
   
 for(i=0;i<n;i++) 
   {
    cout<<arr[i]<<" ";
   }

}
