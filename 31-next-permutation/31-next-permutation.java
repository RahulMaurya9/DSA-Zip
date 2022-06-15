class Solution {
    public void nextPermutation(int[] nums) {
        int n = nums.length;
        if(n<2){
            return;
        }
        int index = n-1;
        while(index > 0){
            if(nums[index-1]<nums[index]){
                break;
            }
            index--;
        }
        if(index==0){
            reverseArray(nums, 0 , n-1);
            return;
        }
        else{
            int val = nums[index-1];
            int j = n-1;
            while(j>= index){
                if(nums[j] > val){
                    break;
                }
                j--;
            }
            swap(nums, j , index-1);
            reverseArray(nums, index, n-1);
        }
        
    }
    public void swap(int[] num , int i , int j){
        int temp = num[i];
        num[i] = num[j];
        num[j] = temp;
    }
    
    public void reverseArray(int[]num, int start , int end ){
        if(start>end){
            return;
        }
        while(start<end){
            swap(num, start , end);
            start++;
            end--;
        }
    }
}