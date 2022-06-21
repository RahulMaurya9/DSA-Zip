class Solution {
    public int[][] merge(int[][] intervals) {
        if(intervals.length <= 1){
            return intervals;
        }
        Arrays.sort(intervals, (i1, i2) -> Integer.compare(i1[0], i2[0]));
        List<int []> finalData = new ArrayList<>();
        int [] newintervals =  intervals[0];
        finalData.add(newintervals);
        for(int[] interval : intervals){
            if(interval[0] <= newintervals[1]){
                newintervals[1] = Math.max(newintervals[1] , interval[1]);
            }
            else{
                newintervals = interval;
                finalData.add(newintervals);
            }
        }
        return finalData.toArray(new int[finalData.size()][]);
    }
}