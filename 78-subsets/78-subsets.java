class Solution {
    public List<List<Integer>> subsets(int[] nums) {
        List<List<Integer>> res  = new ArrayList<>();
        findSubSet(0 , res , nums , new ArrayList<Integer>());
        return res;
    }
    
    public void findSubSet(int ind , List<List<Integer>> res , int[] nums , List<Integer> ds){
        if(ind == nums.length){
            res.add(new ArrayList<>(ds));
            return;
        }
        
        ds.add(nums[ind]);
        findSubSet(ind+1 , res , nums , ds);
        ds.remove(ds.size() -1);
        findSubSet(ind+1 , res , nums ,ds);
    }
}