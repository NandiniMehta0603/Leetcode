class Solution {
public:
    int solve(vector<int> &cost,int index){
        if(index>=cost.size()){
            return 0;
        }
        int ans=cost[index]+min(solve(cost,index+1),solve(cost,index+2));
        return ans;
    }
    int solve1(vector<int> cost,int index,vector<int> &dp){
        if(index>=cost.size()){
            return 0;
        }
        if(dp[index]!=-1){
            return dp[index];
        }
        int ans=cost[index]+min(solve1(cost,index+1,dp),solve1(cost,index+2,dp));
        return dp[index]=ans;
    }

    int solve2(vector<int> &cost){
        int n=cost.size();
        vector<int> dp(n+2,0);

        for(int index=n-1;index>=0;index--){
            dp[index]=cost[index]+min(dp[index+1],dp[index+2]);
        }
        return dp[0];
    }

    int solve3(vector<int> &cost){
        int next1=0;
        int next2=0;
        int n=cost.size();
        for(int index=n-1;index>=0;index--){
            int curr=cost[index]+min(next1,next2);
            next2=next1;
            next1=curr;
        }
        return next1;
    }
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> cost2;
        for(int i=1;i<cost.size();i++){
            cost2.push_back(cost[i]);
        }
        // int first=solve(cost,0);
        // int second=solve(cost2,0);


        // int n=cost.size();
        // vector<int> dp1(n+2,-1);
        // int first=solve1(cost,0,dp1);

        // int n2=cost2.size();
        // vector<int> dp2(n2+1,-1);
        // int second=solve1(cost2,0,dp2);

        // int first=solve2(cost);
        // int second=solve2(cost2);

        int first=solve3(cost);
        int second=solve3(cost2);

        return min(first,second);
    }
};
