class Solution {
public:
    int solve(vector<int> &nums,int index){
        //base case
        if(index>=nums.size()){
            return 0;
        }

        //include
        int include=nums[index]+solve(nums,index+2);

        //exclude
        int exclude=solve(nums,index+1);

        return max(include,exclude);
    }
    int solve1(vector<int> &nums,int index,vector<int> &dp){
        //base case
        if(index>=nums.size()){
            return 0;
        }
        if(dp[index]!=-1){
            return dp[index];
        }
        int include=nums[index]+solve1(nums,index+2,dp);
        int exclude=0+solve1(nums,index+1,dp);

        return dp[index]=max(include,exclude);
    }
    int solve2(vector<int> &nums){
        int n=nums.size();
        vector<int> dp(n+1,0);
        dp[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            int include=nums[i]+dp[i+2];
            int exclude=dp[i+1];
            dp[i]=max(include,exclude);
        }
        return dp[0];
    }
    int solve3(vector<int> &nums){
        int n=nums.size();
        int next1=nums[n-1];
        int next2=0;

        for(int i=n-2;i>=0;i--){
            int include=nums[i]+next2;
            int exclude=next1;

            int curr=max(include,exclude);
            next2=next1;
            next1=curr;
        }
        return next1;
    }
    int rob(vector<int>& nums) {
        // return solve(nums,0);

        int n=nums.size();
        // vector<int> dp(n,-1);
        // return solve1(nums,0,dp);

        // return solve2(nums);

        return solve3(nums);
    }
};
