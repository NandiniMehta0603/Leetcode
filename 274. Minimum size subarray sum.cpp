class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int start=0;
        int end=0;
        int temp=nums[0];
        if(target==nums[0]){
            return 1;
        }
        int n=nums.size();
        int ans=INT_MAX;
        while(end<n){
            if(temp<target){
                end++;
                if(end<n)
                    temp+=nums[end];
            }
            // else if(temp>target){
            //     temp-=nums[start];
            //     start++;
            // }
            // else if(temp==target){
            //     ans=min(ans,end-start+1);
            //     temp-=nums[start];
            //     start++;
            // }

            else {
            ans = std::min(ans, end - start + 1);
            temp -= nums[start];
            start++;
        }
        }
        return (ans==INT_MAX)?0:ans;
    }
};
