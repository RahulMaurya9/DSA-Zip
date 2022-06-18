class Solution {
    public void sortColors(int[] nums) {
        int zeroindex = 0;
        int end = nums.length-1;
        int index = 0 ;
        while(index<=end){
            if(nums[index] == 0){
                swap(nums, zeroindex , index);
                 ++zeroindex;
            }
            else if(nums[index]==2){
                swap(nums,end, index);
                --end;
                index--;
            }
            index++;
           
        }
    }
    public void swap(int nums[] , int start , int place){
        int temp = nums[start];
        nums[start] = nums[place];
        nums[place] = temp;
    }
}