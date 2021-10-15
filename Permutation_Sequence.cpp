#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int> nums;
        int fact = 1;
        
        for(int i = 1; i < n; i++)
        {
            fact = fact * i;
            nums.push_back(i);
        }
        nums.push_back(n);
        
        string ans = "";
        k = k - 1;
        
        while(true)
        {
            ans = ans + to_string(nums[k / fact]);
            
            nums.erase(nums.begin() + k / fact);
            
            if(nums.size() == 0)
                break;
            
            k = k % fact;
            
            fact = fact / nums.size();
        }
        return ans;
    }
};

int main()
{
  int n, k;
  
  cout<<"Enter a number here :- ";
  cin>>n;
  
  cout<<"Enter the value of K :- ";
  cin>>k;
  
  Solution obj;
  
  string ans = obj.getPermutation(n, k);
  
  cout<<k<<"th Permutation Sequence of given number "<<n<<"is :- "<<ans;
}
