class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // brute force
        int rows = matrix.size();
        int columns = matrix[0].size();
        // for(int i=0; i<rows; i++){
        //     for(int j=0; j<columns; j++){
        //         if(matrix[i][j]==target){
        //             return true;
        //         }
        //     }
        // }
        // return false;

        int row = 0;
        int col = columns - 1;
        while(row < rows && col >= 0) {
            if(matrix[row][col]==target) return true;
            else if(matrix[row][col]<target) row++;
            else col--;
        }
        
        return false;
    }
};