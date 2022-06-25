class Solution {
    public int majorityElement(int[] nums) {
        int majEle = nums[0];
        int counter = 1;
        for(int i = 1 ; i<nums.length ; ++i){
            if(counter == 0){
                majEle = nums[i];
                ++counter;
            }else if(majEle == nums[i]){
                ++counter;
            }else{
                --counter;
            }
        }
        return majEle;  
    }
}