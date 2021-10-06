       #include <bits/stdc++.h>
       using namespace std;

       #define fast                             \
              ios_base::sync_with_stdio(false); \
              cin.tie(NULL);
       #define time cerr << "Time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" \
                     << "\n";
       #define F first
       #define S second
       #define pb push_back
       typedef long long int ll;

       /*-----------------------To find Maximum Sum Subarray-------------------------------------------------------------------------------------*/

       void solve()
       {

              int array[] = {4, 3, -2, 6, -14, 7, -1, 4, 5, 7, -10, 2, 9, -10, -5, -9, 6, 1};

              int arraySize = sizeof(array) / sizeof(array[0]);

              /*****************Brute Force***************************/

              int total = array[0];
              int current_sum = array[0];

              for (int i = 0; i < arraySize; i++)
              {
                     current_sum = array[i];

                     for (int j = i + 1; j < arraySize; j++)
                     {

                            current_sum += array[j];
                            total = max(current_sum, total);
                     }
              }

              /********************Kadane's Approach***********************/

              int currentSum = array[0];
              int overallSum = array[0];

              for (int i = 1; i < arraySize; i++)
              {
                     if (currentSum >= 0)
                     {
                            currentSum += array[i];
                     }
                     else
                     {
                            currentSum = array[i];
                     }

                     if (overallSum < currentSum)
                     {
                            overallSum = currentSum;
                     }
              }

              cout << "Solution using Kadane's Algo : " << overallSum << "\n";
              cout << "Solution using Brute Force Approach : " << total << "\n";

              /*
              Time complexity of Brute force = O(n^2) ; 
              Time complexity of Kadane's Algorithm = O(n^2) ; 
              */
       }

       int32_t main()
       {

              fast;
              time;

       #ifndef ONLINE_JUDGE
              freopen("input.txt", "r", stdin);
              freopen("output.txt", "w", stdout);
       #endif

              int t = 1;
              // cin >> t;

              while (t--)
              {
                     solve();
              }

              return 0;
       }