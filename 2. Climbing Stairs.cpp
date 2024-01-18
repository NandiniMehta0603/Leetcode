class Solution {
public:
    int solve(int n,int index){
        //base case
        if(index==n){
            return 1;
        }
        if(index>n){
            return 0;
        }
        int ans=solve(n,index+1)+solve(n,index+2);
        return ans;
    }
    int solve1(int n,int index,vector<int> &dp){
        //base case
        if(n==index){
            return 1;
        }
        if(index>n){
            return 0;
        }
        if(dp[index]!=-1){
            return dp[index];
        }

        int ans=solve1(n,index+1,dp)+solve1(n,index+2,dp);
        return dp[index]=ans;
    }
    int climbStairs(int n) {
        int index=0;
        // return solve(n,index);

        vector<int> dp(n+1,-1);
        return solve1(n,index,dp);
    }
};
