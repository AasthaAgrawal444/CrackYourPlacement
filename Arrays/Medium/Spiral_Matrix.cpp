class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int startRow=0, endRow=n-1;
        int startCol=0, endCol=m-1;

        vector<int> ans;

        while(startCol<=endCol and startRow<=endRow){
            for(int j=startCol; j<=endCol; j++){
                ans.push_back(matrix[startRow][j]);
            }
            for(int i=startRow+1; i<=endRow; i++){
                ans.push_back(matrix[i][endCol]);
            } 
            for(int j=endCol-1; j>=startCol; j--){
                if(startRow == endRow) break;
                ans.push_back(matrix[endRow][j]);
            }
            for(int i=endRow-1; i>=startRow+1; i--){
                if(startCol == endCol) break;
                ans.push_back(matrix[i][startCol]);
            }
            startRow++;
            endRow--;
            startCol++;
            endCol--;
        }
        return ans;
    }
};