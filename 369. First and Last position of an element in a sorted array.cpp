class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start=0;
        int n=nums.size();
        int end=n-1;

        int start_pos=-1;
        int mid=start+(end-start)/2;
        while(start<=end){
            if(nums[mid]==target){
                start_pos=mid;
                // cout<<"ans "<<start_pos<<endl;
                end=mid-1;
            }
            else if(nums[mid]>target){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
            mid=start+(end-start)/2;
        }
        vector<int> ans;
        ans.push_back(start_pos);
        start=0;
        end=n-1;
        int end_pos=-1;
        mid=start+(end-start)/2;
        while(start<=end){
            if(nums[mid]==target){
                end_pos=mid;
                start=mid+1;
            }
            else if(nums[mid]>target){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
            mid=start+(end-start)/2;
        }
        ans.push_back(end_pos);
        return ans;
    }
};
