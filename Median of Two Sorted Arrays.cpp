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
