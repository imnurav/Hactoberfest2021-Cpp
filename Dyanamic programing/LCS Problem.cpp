#include <bits/stdc++.h>
using namespace std;
int LCS(string str1, string str2)
{
  int len1 = str1.size();
  int len2 = str2.size();
  int dp[len1 + 1][len2 + 1];	
  for (int i = 0; i <= len1; i++)
    {
    for (int j = 0; j <= len2; j++)
	{
	    if (i == 0 || j == 0)
	         {
	              dp[i][j] = 0;
		 }
	     else if (str1[len1 - i] == str2[len2 - j])
	           {
	                dp[i][j] = 1 + dp[i - 1][j - 1];	/ 
	               }
	      else
		 {
	      int a = dp[i - 1][j];	
               int b = dp[i][j - 1];
               int c = dp[i - 1][j - 1];	
              dp[i][j] = max(a, max(b, c));
			}
		}
	}
   return dp[len1][len2];
}
int main()    
{
	string str1, str2;
	cout<< "String 1:";
	cin >> str1;
	cout<< "String 2:";
	cin >> str2;
	cout << "LCS of " << str1 << " and " << str2 << " is " << LCS(str1, str2) << endl;
	return 0;
}
