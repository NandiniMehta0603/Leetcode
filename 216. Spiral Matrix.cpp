class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        //steps: left to right, top to bottom, right to left and then bottom to up
        int rows=matrix.size();
        int cols=matrix[0].size();
        vector<int> ans;
        int total=rows*cols;
        int count=0;
        int leftCol=0;
        int rightCol=cols-1;
        int topRow=0;
        int bottomRow=rows-1;
        while(count<total){
            //top row
            for(int i=leftCol;count<total && i<=rightCol;i++){
                ans.push_back(matrix[topRow][i]);
                count++;
            }topRow++;
            //right col
            for(int i=topRow;count<total && i<=bottomRow;i++){
                ans.push_back(matrix[i][rightCol]);
                count++;
            }rightCol--;
            //bottom row
            for(int i=rightCol;count<total && i>=leftCol;i--){
                ans.push_back(matrix[bottomRow][i]);
                count++;
            }bottomRow--;
            //left col
            for(int i=bottomRow;count<total && i>=topRow;i--){
                ans.push_back(matrix[i][leftCol]);
                count++;
            }
            leftCol++;
        }
        return ans;
    }
};
