#include<iostream>
//inputting required header files
#include<algorithm>
#include<bits/stdc++.h>
using namespace  std;
int main(){
    //two unsorted arrays
    int a[2]={6,4};
    int b[3]={8,3,9};
    //implementing sort function and sorting the two arrays
    sort(a,a+2);
    sort(b,b+3);
   int c[5],in=0;
   //merging the two arrays
   for(int i=0;i<2;i++){
c[in]=a[i];
in++;
   }
   for(int i=0;i<3;i++){
c[in]=b[i];
in++;
   }
   //sorting the merged array and printing
   sort(c,c+5);
   for(int i=0;i<5;i++){
       cout<<c[i]<<" ";
   }
}










