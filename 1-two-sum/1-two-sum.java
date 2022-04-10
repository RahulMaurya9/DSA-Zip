class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer , Integer>  hashmap = new HashMap();
        for(int i = 0 ; i < nums.length ; i++){
            int rem = target - nums[i];
            if(hashmap.containsKey(rem)){
                return new int[]{ i , hashmap.get(rem)};
            }
            else{
                hashmap.put(nums[i] , i);
            }
        }
        return new int[]{};
    }
}