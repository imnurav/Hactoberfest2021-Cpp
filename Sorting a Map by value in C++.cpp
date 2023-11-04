// C++ program for the above approach

#include <bits/stdc++.h>
using namespace std;

// Comparator function to sort pairs
// according to second value
bool cmp(pair<string, int>& a,
		pair<string, int>& b)
{
	return a.second < b.second;
}

// Function to sort the map according
// to value in a (key-value) pairs
void sort(map<string, int>& M)
{

	// Declare vector of pairs
	vector<pair<string, int> > A;

	// Copy key-value pair from Map
	// to vector of pairs
	for (auto& it : M) {
		A.push_back(it);
	}

	// Sort using comparator function
	sort(A.begin(), A.end(), cmp);

	// Print the sorted value
	for (auto& it : A) {

		cout << it.first << ' '
			<< it.second << endl;
	}
}

// Driver Code
int main()
{

	// Declare Map
	map<string, int> M;

	// Given Map
	M = { { "GfG", 3 },
		{ "To", 2 },
		{ "Welcome", 1 } };

	// Function Call
	sort(M);
	return 0;
}
