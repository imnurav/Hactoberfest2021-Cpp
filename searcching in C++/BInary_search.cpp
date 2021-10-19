#include<bits/stdc++.h>
using namespace std;


void BinarySearch(int arr[],int n,int x){
    int s=0,e=n-1;
    int pos=-1;
    while(s<=e){
        int mid=(s+e)/2;

        if(arr[mid]==x){
            pos=mid+1;
            cout<<"Element found at position "<<pos;
            break;
        }
        else if(arr[mid]<x){
            s=mid+1;
        }
        else if(arr[mid]>x){
            e=mid-1;
        }
        
    }
    if(pos==-1){
        cout<<"element not found";
    }
    

}
int main(){
    int arr[]={ 2, 3, 4, 10, 40 };
    int n= sizeof(arr)/sizeof(arr[0]);

    int x=10;
    BinarySearch(arr,n,x);
    
}