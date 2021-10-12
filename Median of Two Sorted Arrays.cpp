#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& A, vector<int>& B) {
        int n1 = A.size();
        int n2 = B.size();
        
        // select the minimum sized array out of A & B
        if(n2 < n1)
            return findMedianSortedArrays(B, A);
        
        int l = 0, h = n1;
        
        while(l <= h)
        {
            int cut1 = l + (h - l) / 2;
            
            int cut2 = (n1 + n2) / 2 - cut1;
            
            int l1 = cut1 == 0 ? INT_MIN : A[cut1 - 1];
            
            int l2 = cut2 == 0 ? INT_MIN : B[cut2 - 1];
            
            int r1 = cut1 == n1 ? INT_MAX : A[cut1];
            
            int r2 = cut2 == n2 ? INT_MAX : B[cut2];
            
            if(l1 > r2)
            {
                h = cut1 - 1;
            }
            else if(l2 > r1)
            {
                l = cut1 + 1;
            }
            else
            {
                return (n1+n2)%2 == 0 ? ((double)max(l1,l2) + (double)min(r1,r2))/2.0 : min(r1,r2);    
            }
        }
        return -1;
    }
};

int main()
{
    vector<int> A, B;
    
    int n1,n2;
    
    cout<<"Enter the Size of First Array : ";
    cin>>n1;
    
    cout<<"Enter the Size of second Array : ";
    cin>>n2;
    
    
    cout<<"\nEnter the Elements of First Array \n";
    for(int i = 0; i < n1; i++)
    {
        int t;
        cin>>t;
        A.push_back(t);
    }
    
    cout<<"\nEnter the Elements of second Array \n";
    for(int i = 0; i < n2; i++)
    {
        int t;
        cin>>t;
        B.push_back(t);
    }
    
    sort(A.begin(), A.end());
    
    sort(B.begin(), B.end());
    
    cout<<"\nElements of first Array :- \n";
    
    for(int t : A)
    cout<<t<<" ";
    
    cout<<"\nElements of second Array :- \n";
    
    for(int t : B)
    cout<<t<<" ";
    
    Solution obj;
    
    double ans = obj.findMedianSortedArrays(A, B);
    
    cout<<"\nMedian of Two Sorted Arrays is :- "<<ans;
    
}
