/* Catalan numbers is a number sequence, which occurs in many combinatorial problems.
The first few numbers Catalan numbers, Cn (starting from zero):1,1,2,5,14,42,132,429,1430
 */
#include <iostream>
using namespace std;

// A recursive function to find nth catalan number
 long int catalan(int n)
{
	// Base case
	if (n <= 1)
		return 1;

	// catalan(n) is sum (catalan(i)*catalan(n-i-1))
	long int ans = 0;
	for (int i=0; i<n; i++)
		ans += catalan(i)* catalan(n - i - 1);
	return ans;
}

int main()
{   
    cout<<"Catalan numbers are:"<<endl;
	for (int i=0; i<8; i++)
		cout << catalan(i) << " ";
	return 0;
}
