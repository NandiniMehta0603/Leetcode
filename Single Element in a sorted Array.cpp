class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int start=0;
        int end=nums.size()-1;
        int ans=-1;
        if(end==0){
            return nums[0];
        }else if(nums[0]!=nums[1]){
            return nums[0];
        }else if(nums[end]!=nums[end-1]){
            return nums[end];
        }
        int mid;
        while(start<=end){
         mid=start+(end-start)/2;
         //base condition when it is unique .see first iamge above 
         if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]){
             return nums[mid];
         }
         //checking for step 5 .see step 5 from above 
        else if(((mid%2)==0 && nums[mid]==nums[mid+1]) || ((mid%2)==1 && nums[mid]==nums[mid-1])){
             start=mid+1;
         }
        else{        //step 6
             end=mid-1;
        }
        }
        return -1;
    }
};
