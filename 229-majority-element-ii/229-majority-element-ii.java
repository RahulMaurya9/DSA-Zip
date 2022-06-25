class Solution {
    public List<Integer> majorityElement(int[] nums) {
        int num1 = -1 , num2 = -1 , count1 =0 , count2 = 0 , len = nums.length;
        for(int val : nums){
            if(val == num1)
                ++count1;
            else if(val == num2)
                ++count2;
            else if(count1 == 0){
                num1 = val;
                ++count1;
            }else if(count2 == 0){
                num2 = val;
                ++count2;
            }else{
                --count1;
                --count2;
            }
        }
        count1 = 0;
        count2 = 0;
        for(int val : nums){
            if(val == num1)
                count1++;
            else if(val == num2)
                count2++;
        }
        List<Integer> finalAns = new ArrayList<Integer>();
        if(count1 > len/3)
            finalAns.add(num1);
        if(count2 > len/3)
            finalAns.add(num2);
        return finalAns;
        
    }
}