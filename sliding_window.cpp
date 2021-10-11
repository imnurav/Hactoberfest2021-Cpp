//Given an array of integers Arr of size N and a number K. Return the maximum sum of a subarray of size K.

/*Instead of applying brute-force logic of nested for loop we will use one intelligent algorithm named "Window-sliding Technique"
The main idea is to convert two nested loops into a single loop, hence time-complexity of this code is reduced from O(n^2) to O(n)
*/

#include <iostream>
using namespace std;

// Returns maximum sum in a subarray of size k.
int maxSum(int arr[], int n, int k)
{
	// size of the subarray should not exceed length of the original array 
	if (n < k) {
		cout << "Invalid";
		return -1;
	}
	// loop to find sum of first window of size k.
	int max_sum = 0;
	for (int i = 0; i < k; i++)
		max_sum += arr[i];

	/* Here is the main modification of brute-force approach. We will compute sums of remaining windows by 
    removing first element of previous window and adding last element of current window.*/

	int window_sum = max_sum;
	for (int i = k; i < n; i++) {
		window_sum += arr[i] - arr[i - k];
		max_sum = max(max_sum, window_sum);
	}
	return max_sum;
}

int main()
{
	int arr[] = {12,28,45,90,10,68,27,8,18,20,34,74};
	int k = 4;
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << maxSum(arr, n, k);
	return 0;
}
