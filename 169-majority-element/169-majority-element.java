class Solution {
    public int majorityElement(int[] nums) {
        int majority = nums[0];
        int counter = 1;
        for(int i =1  ; i< nums.length ; ++i){
            if(counter == 0){
                ++counter;
                majority = nums[i];
            }else if( majority == nums[i]){
                counter++;
            }else{
                counter--;
                
            }
        }
        return majority;
    }
}