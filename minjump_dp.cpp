/*Given an array of integers where each element represents the max number of steps that can be made forward from 
that element. Write a function to return the minimum number of jumps to reach the end of the array (starting from the first element). 
*/

/*

test case
n=6;
arr[]={3,4,2,1,2,1}
Output:2
*/


 //Solution using Dynamic Programming:

 #include <iostream>
#include <string.h>
#include <limits.h>
using namespace std;

int minJumps(int arr[], int n) 
    { 
        
        int dp[n]; 
        int i, j; 
      
       
        dp[0] = 0; 
      
        
        for (i = 1; i < n; i++) { 
            dp[i] = INT_MAX; 
            for (j = 0; j < i; j++) { 
                if (i <= j + arr[j] && dp[j] != INT_MAX) { 
                    dp[i] = min(dp[i], dp[j] + 1); 
                    break; 
                } 
            } 
        } 
        return dp[n - 1]; 
    } 
    

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
cout<<minJumps(arr, n);  //calling function to find minimum jumps to reach end
	

}