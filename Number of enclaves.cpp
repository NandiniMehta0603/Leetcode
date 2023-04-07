class Solution {
public:
    void solve(int i,int j,int row,int col,vector<vector<int>> &grid){
        if(i<0 || j<0 || i>=row || j>=col || grid[i][j]==0){
            return ;
        }
        grid[i][j]=0;
        solve(i+1,j,row,col,grid);
        solve(i,j+1,row,col,grid);
        solve(i-1,j,row,col,grid);
        solve(i,j-1,row,col,grid);
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int row=grid.size();
        int col=grid[0].size();

        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if((i==0 || j==0 || i==row-1 || j==col-1) && grid[i][j]==1){
                    solve(i,j,row,col,grid);
                }
            }
        }
        int sum=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                sum+=grid[i][j];
            }
        }
        return sum;
    }
};
