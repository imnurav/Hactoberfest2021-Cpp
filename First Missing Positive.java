class Solution {
    public int firstMissingPositive(int[] nums) {
        cyclicSort(nums);
        for(int i = 0 ; i < nums.length;i++){
            if(nums[i] != i+1){
                return i+1;
            }
        }               
        return nums.length + 1;
    }
    public void cyclicSort(int[] arr){
        int i = 0;
        while(i < arr.length){
            if(arr[i] > 0 && arr[i] <= arr.length && arr[i] != arr[arr[i] - 1]){
                    swapArray(arr,i,arr[i]-1);
            }else {
                i++;
            }
        }
    }
    public void swapArray(int[] arr,int first,int second){
        int temp = arr[first];
        arr[first] = arr[second];
        arr[second] = temp;
    }

}
