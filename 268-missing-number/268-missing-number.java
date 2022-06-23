class Solution {
    public int missingNumber(int[] nums) {
        int len = nums.length;
        int sum = (len * (len  + 1))/2;
        int curSum = 0;
        for(int val : nums){
            curSum += val;
        }
        return sum  - curSum;
        
    }
}