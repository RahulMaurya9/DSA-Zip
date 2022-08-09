class Solution {
    public List<List<Integer>> combine(int n, int k) {
        List<List<Integer>> res = new ArrayList<>();
        findCombination(res , new ArrayList<Integer>(), k, n , 1);
        return res;
    }
    
    public void findCombination(List<List<Integer>> res , List<Integer> ds, int k , int n , int start){
        if(k == 0 ){
            res.add(new ArrayList<>(ds));
            return ;
        }
        
        for(int i = start ; i <= n ; i++){
            ds.add(i);
            findCombination(res , ds , k-1 ,n ,i+1);
            ds.remove(ds.size() - 1);
        }
        
    }
}