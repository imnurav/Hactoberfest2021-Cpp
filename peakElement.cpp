/* 
Given an array of integers. Find a peak element in it. An array element is a peak if it is NOT smaller than its neighbours. For corner elements, we need to consider only one neighbour.
*/

#include <bits/stdc++.h>
using namespace std;

int peak_element(int arr[], int n)
{
    //declaring and initializing two pointers l and r
    //pointing to the leftmost and rightmost element respectively.
    int l = 0, r = n - 1;
    //iterating the elements until l is less than equal to r
    while (l <= r) {
        //computing mid
        // (l+r)/2 directly not used as in some cases int overflow may occur
        int mid = l + (r - l) / 2;
        //if mid lies between 2nd element and last 2nd element(both inclusive)
        if(mid>0 && mid<n-1){
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
                return mid;
            //element on left is greater then ignore the right half and vice versa
            else if(arr[mid-1]>arr[mid])
                r=mid-1;
            else
                l=mid+1;
        }
        //if 1st element is the mid
        else if(mid==0)
        {
            if(arr[0]>arr[1])
                return 0;
            else return 1;
        }
        // if last element is the mid
        else if(mid==n-1){
            if(arr[n-1]>arr[n-2])
                return n-1;
            else return n-2;
        }
    }
    return -1;
}

int main()
{
    //taking input from user
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter array Elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Peak element index: ";
    cout << peak_element(arr, n);
}

/* 
Test Cases:
  * Input :-
    Enter size of array: 7
    Enter array Elements: 10 20 15 2 23 90 67
   
  * Output :-
    Peak element index: 1
	
  * Input :-
    Enter size of array: 6
    Enter array Elements: 60 70 80 20 40 50
    
  * Output :-
    Peak element index: 2

  * Time complexity: O(Log n)
  * Space Complexity: O(1)
*/