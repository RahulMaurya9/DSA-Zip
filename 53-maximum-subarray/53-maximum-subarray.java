class Solution {
    public int maxSubArray(int[] nums) {
        int sum = 0 ;
        int global_max = nums[0];
        int len = nums.length;
        for(int i = 0 ; i<len ; ++i){
            sum += nums[i];
            if(sum>global_max){
                global_max = sum;
            }
            if(sum<0){
                sum = 0;
            }
        }
        return global_max;
    }
}