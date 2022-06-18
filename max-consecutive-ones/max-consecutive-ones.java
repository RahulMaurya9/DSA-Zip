class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int countofOne =0;
        int globalCount = 0 ;
        for(int val : nums){
            if(val == 1){
                ++countofOne;
            }
            else{
                if(countofOne>globalCount){
                    globalCount = countofOne;
                }
                countofOne = 0;
            }
        }
        if(countofOne > globalCount){
            globalCount = countofOne;
        }
        return globalCount;
        
    }
}