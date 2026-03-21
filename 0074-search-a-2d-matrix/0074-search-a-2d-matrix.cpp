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

        int low = 0;
        int high = rows*columns -1;
        while(low<=high){
            int mid = low + (high-low)/2;
            int row = mid/columns;
            int col = mid % columns;
            if(matrix[row][col] == target) return true;
            else if(matrix[row][col] < target) low = mid + 1;
            else high = mid - 1;
        }
        return false;
    }
};