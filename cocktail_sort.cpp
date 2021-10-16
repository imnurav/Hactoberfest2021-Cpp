//Implementation of Cocktail Sort

#include<iostream>

//Program by Siddharth Bhamare

using namespace std;
void print(int ar[],int size) 
{

    for(int i=0;i<size;i++)
    {
        cout<<ar[i]<<" ";
    }    
}
void cocktail(int ar[],int size)  
{
    int cont=1;
    int s=0;
    int temp=0;
    int e=size-1;
    while(cont==1)
    {
        cont=0;
        for(int i=s;i<e;i++)  
        {
            if(ar[i]>ar[i+1])
            {
                temp=ar[i];
                ar[i]=ar[i+1];
                ar[i+1]=temp;
                cont=1;
            }
        }
        if(cont==0)            
        {
            break;
        }
        cont=0;
        e--;
        for(int i=e-1;i>=s;i--) 
        {
            if(ar[i+1]<ar[i])
            {
                temp=ar[i];
                ar[i]=ar[i+1];
                ar[i+1]=temp;
                cont=1;
        }
    }
    if(cont==0)
        {
            break;
        }
    s++;
    }
}
int main()  
{
    int n;
    cout<<"Enter size of array :";
    cin>>n;
int arr[n];
cout<<"Enter elements in array : ";
for(int i=0;i<n;i++) 
{
    cin>>arr[i];
}
cocktail(arr,n);
cout<<"\nAfter sorting array : ";
print(arr,n);
}