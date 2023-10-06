class Solution {
public:
    int solve1(int n,vector<int> &dp){
        if(n==1){
            return 1;
        }
        if(dp[n]!=-1){
            return dp[n];
        }

        int maxi=0;
        for(int i=1;i<n;i++){
            maxi=max(maxi,max(i*(n-i),i*solve1(n-i,dp)));
        }
        return dp[n]=maxi;
    }
    int integerBreak(int n) {
        vector<int> dp(n+1,-1);
        return solve1(n,dp);
    }
};
