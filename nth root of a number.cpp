#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int i, pre, root, trex;
	float num, ans = 0.0, inc = 1.0;
	cout << "Enter the number to get it's nth root: ";
	cin >>num;
	cout << "Enter the 'n' value of root: ";
	cin >>root;
	cout << "Enter the precision for answer: ";
	cin >> pre;                                                                        

	for(i = 1; i <= pre; i++)
	{
		while((pow(ans, root)) <= num)
		{
			ans = ans + inc;
		}
		ans = ans - inc;
		inc = inc/10;
	}
	cout <<"The "<<root<<"th root of "<<num<<" is: "<<ans;
	return 0;
}
