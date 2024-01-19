// class Solution {
// public:
//     int solve(vector<vector<int>> &matrix,int row,int col){
//         //base case
//         if(row==matrix.size()){
//             return 0;
//         }
//         if(col<0 || col>=matrix[0].size()){
//             return INT_MAX;
//         }
//         int first=solve(matrix,row+1,col-1);
//         int second=solve(matrix,row+1,col);
//         int third=solve(matrix,row+1,col+1);

//         int temp=min(first,min(second,third));
//         if(temp==INT_MAX){
//             return temp;
//         }
//         return matrix[row][col]+temp;
//     }
//     int solve1(vector<vector<int>> &matrix,int row,int col,vector<vector<int>> &dp){
//         //base case
//         if(row==matrix.size()){
//             // return dp[row][col]=matrix[row][col];
//             return 0;
//         }
//         if(col<0 || col>=matrix[0].size()){
//             return INT_MAX;
//         }
//         if(dp[row][col]!=-1){
//             return dp[row][col];
//         }

//         int first=solve1(matrix,row+1,col-1,dp);
//         int second=solve1(matrix,row+1,col,dp);
//         int third=solve1(matrix,row+1,col+1,dp);

//         int temp=min(first,min(second,third));
//         if(temp==INT_MAX){
//             return dp[row][col]=INT_MAX;
//         }
//         return dp[row][col]=matrix[row][col]+temp;
//     }
//     int minFallingPathSum(vector<vector<int>>& matrix) {
//         int row=0;
//         int col=matrix[0].size();
//         int result=INT_MAX;
//         // for(int i=0;i<col;i++){
//         //     int temp=solve(matrix,row,i);
//         //     result=min(result,temp);
//         // }
//         vector<vector<int>> dp(matrix.size(),vector<int>(matrix[0].size(),-1));
//         for(int i=0;i<col;i++){
//             int temp=solve1(matrix,row,i,dp);
//             result=min(result,temp);
//         }

//         return result;
//     }
// };

class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        vector<vector<int>> dp(rows, vector<int>(cols, 0));

        // Copy the last row as the base case
        for (int j = 0; j < cols; ++j) {
            dp[rows - 1][j] = matrix[rows - 1][j];
        }

        for (int i = rows - 2; i >= 0; --i) {
            for (int j = 0; j < cols; ++j) {
                int bestNextMove = dp[i + 1][j];
                if (j > 0) {
                    bestNextMove = min(bestNextMove, dp[i + 1][j - 1]);
                }
                if (j < cols - 1) {
                    bestNextMove = min(bestNextMove, dp[i + 1][j + 1]);
                }
                dp[i][j] = matrix[i][j] + bestNextMove;
            }
        }
        int result = INT_MAX;
        for (int j = 0; j < cols; ++j) {
            result = min(result, dp[0][j]);
        }

        return result;
    }
};
