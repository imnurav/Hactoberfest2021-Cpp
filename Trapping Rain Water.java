class Solution {
    public int trap(int[] height) {
        int n = height.length;
        int[] Leftmax = new int[n];
        int ll = 0;
        for(int i = 0;i<n;i++){
            Leftmax[i] = ll;
            ll = Math.max(ll,height[i]);
        }
        int[] Rightmax = new int[n];
        int rl = 0;
        for(int i = n-1; i>=0;i--){
            Rightmax[i] = rl;
            rl = Math.max(rl,height[i]);
        }
        
        int ans = 0;
        for(int i =0;i<n;i++){
            ans += Math.max(0,Math.min(Leftmax[i],Rightmax[i]) - height[i]);
        }
        
        return ans;
        
        
    }
}
