class Solution {
    public void moveZeroes(int[] nums) {
        int val = 0;
        
        for(int i  = 0 ; i< nums.length ; ++i){
            
            if(nums[i] == 0 ){
                val++;
            }
            else if( val > 0){
                int temp = nums[i];
                nums[i] = 0 ; 
                nums[i - val] = temp;
            }
        }
        
    }
}