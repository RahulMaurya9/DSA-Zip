class Solution {
    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        List<List<Integer>> res = new ArrayList<>();
        findCombinationWithNoDuplicate( 0 , candidates ,res , new ArrayList<>() , target);
        return res;
    }
    public void findCombinationWithNoDuplicate(int ind , int[] arr, List<List<Integer>> ans , List<Integer> ds , int target){
        if( ind == arr.length){
            if(target == 0 ){
                ans.add(new ArrayList<>(ds));
            }
            return ;
        }
        
        if(arr[ind] <= target){
            ds.add(arr[ind]);
            findCombinationWithNoDuplicate(ind , arr , ans , ds , target - arr[ind]);
            ds.remove(ds.size() - 1);
        }
                   
        findCombinationWithNoDuplicate(ind + 1 , arr , ans , ds, target);
    }
}