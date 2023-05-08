class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int rows=mat.size();
        //if the matrix row size is odd
        //if the matrix row size of even
        int cols=mat[0].size();
        int sum=0;
        int i=0;
        if(rows%2==0){
            while(i<cols){
                sum+=mat[i][i];
                sum+=mat[i][cols-i-1];
                i++;
            }
        }
        else{
            while(i<cols){
                sum+=mat[i][i];
                sum+=mat[i][cols-i-1];
                i++;
            }
            int mid=cols/2;
            sum-=mat[mid][mid];
        }
        
        return sum;
        
    }
};
