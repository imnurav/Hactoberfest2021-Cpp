//Ques
//Given an array of integers, find the length of the longest (strictly) increasing subsequence from the given array.
/*
//example 1
Input:
N = 16
A[]={0,8,4,12,2,10,6,14,1,9,5
     13,3,11,7,15}
Output: 6
Explanation:Longest increasing subsequence
0 2 6 9 13 15, which has length 6

Example 2

Input:
N = 6
A[] = {5,8,3,7,9,1}
Output: 3
Explanation:Longest increasing subsequence
5 7 9, with length 3



*/

//Solution:


#include <iostream>
#include <string.h>
using namespace std;


        int ceilIdx(int tail[], int l, int r, int key)   //this function perform similar operation to binary search in order to return the ceiling index
        { 
            while (r > l) {         
                int m = l + (r - l) / 2; 
                if (tail[m] >= key) 
                    r = m; 
                else
                    l = m+1; 
            } 
      
            return r; 
        } 
  
    int LIS(int arr[], int n) 
    { 
     
  
        int tail[n]; 
        int len =1; 
  
        tail[0] = arr[0]; 
        
        for (int i = 1; i < n; i++) {
            
            if(arr[i] > tail[len - 1])
            {
                tail[len] = arr[i];
                len++;
            }
            else{
                int c = ceilIdx(tail, 0, len - 1, arr[i]);  //this function return the ceiling index where we need to put 
                //the next element of array if the comparsion if condition is not satisfied.
                
                tail[c] = arr[i];
            }
        } 
  
        return len; 
    } 


int main() {
	
int n;
cin>>n;  //taking input of number of elements of an array
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i]; //taking input
}

cout<<LIS(arr, n); //calling function and printing the longest increasing subsequence of an array
	

}



//time complexity

/*Time Complexity : O( N*log(N) )
Auxiliary Space: O(N)*/

