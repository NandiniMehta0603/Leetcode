class Solution {
public:
    int solve(vector<int> &nums1,vector<int> &nums2,int index1,int index2){
        if(index1>=nums1.size() || index2>=nums2.size()){
            return 0;
        }
        
        int include=(nums1[index1]*nums2[index2])+solve(nums1,nums2,index1+1,index2+1);
        int exclude=INT_MIN;
        int excl1=INT_MIN;
        int excl2=INT_MIN;
        if(index1+1<nums1.size()){
            excl1=solve(nums1,nums2,index1+1,index2);
        }
        if(index2+1<nums2.size()){
            excl2=solve(nums1,nums2,index1,index2+1);
        }
        exclude=max(excl1,excl2);
        // int exclude=max(solve(nums1,nums2,index1+1,index2),solve(nums1,nums2,index1,index2+1));
        int ans=max(include,exclude);
        return ans;
        
    }
    int solve1(vector<int> &nums1,vector<int> &nums2,int index1,int index2,vector<vector<int>> &dp){
        if(index1>=nums1.size() || index2>=nums2.size()){
            return 0;
        }
        if(dp[index1][index2]!=-1){
            return dp[index1][index2];
        }

        int include=(nums1[index1]*nums2[index2])+solve1(nums1,nums2,index1+1,index2+1,dp);
        int exclude=INT_MIN;
        int excl1=INT_MIN;
        int excl2=INT_MIN;

        if(index1+1<nums1.size()){
            excl1=solve1(nums1,nums2,index1+1,index2,dp);
        }
        if(index2+1<nums2.size()){
            excl2=solve1(nums1,nums2,index1,index2+1,dp);
        }
        exclude=max(excl1,excl2);
        cout<<"This: "<<max(include,exclude)<<endl;
        return dp[index1][index2]=max(include,exclude);
    }
    int solve2(vector<int> &nums1,vector<int> &nums2,int index1,int index2,vector<vector<int>> &dp){
        if(index1>=nums1.size()||index2>=nums2.size()){
            return INT_MIN;
        }
        if(dp[index1][index2]!=-1){
            return dp[index1][index2];
        }

        int include=(nums1[index1]*nums2[index2])+max(0,solve2(nums1,nums2,index1+1,index2+1,dp));
        int exclude=max(solve2(nums1,nums2,index1+1,index2,dp),solve2(nums1,nums2,index1,index2+1,dp));
        return dp[index1][index2]=max(include,exclude);
    }

    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        // int ans=solve(nums1,nums2,0,0);
        // return ans;

        int n1=nums1.size();
        int n2=nums2.size();

        vector<vector<int>> dp(n1+1,vector<int>(n2+1,-1));
        return solve2(nums1,nums2,0,0,dp);
    }
};
