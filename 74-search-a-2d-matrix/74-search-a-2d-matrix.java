class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int row = matrix.length;
        int col = matrix[0].length;
        for(int i = 0 ; i<row ; ++i){
            if(matrix[i][0] <= target && matrix[i][col-1] >= target){
                for(int j =0 ; j < col ; ++j){
                    if(matrix[i][j]== target){
                        return true;
                    }
                }
                return false;
            }
        }
        return false;
    }
}