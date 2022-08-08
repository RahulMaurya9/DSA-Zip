
import java.util.Arrays;

class Solution {
    public List<List<Integer>> combinationSum2(int[] candidates, int target) {
        Arrays.sort(candidates);
        List<List<Integer>> arr = new ArrayList<>();
        sumcombination(0 , arr , candidates , target , new ArrayList());
        return arr;
        
    }
    public void sumcombination(int ind ,List<List<Integer>> res , int[] arr , int target , List<Integer> ds){
        if(target == 0 ){
            res.add(new ArrayList<>(ds));
            return ;
        }
        
        for(int i = ind ; i< arr.length; i++){
            if(i> ind && arr[i] == arr[i-1]) continue;
            if(arr[i] > target) break;
            
            ds.add(arr[i]);
            sumcombination(i+1 , res , arr , target - arr[i] , ds);
            ds.remove(ds.size() -1);
            
        }
    }
}