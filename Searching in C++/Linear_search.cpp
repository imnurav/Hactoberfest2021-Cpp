#include<bits/stdc++.h>
using namespace std;

void LinearSearch(int arr[], int n,int x){
    int position=-1,left=0,right=n-1;
    while(left<=right){
        if(arr[left]==x){
            position=left+1;
            cout<<"Element found at position "<<position<<" in attemp = "<<left+1<<endl;
        }
        if(arr[right]==x){
            position=right+1;
            cout<<"Element found at position "<<position<<" in attemp = "<<n-right<<endl;
        }
        left++;
        right--;
    }
    if (position == -1)
        cout << "Not found in Array with "
             << left << " Attempt";
}

int main(){

    int arr[]={32,26,234,2,13,1,46,24};
    int len= sizeof(arr)/sizeof(arr[0]);
    int x=24;
    LinearSearch(arr,len,x);
    return 0;

}