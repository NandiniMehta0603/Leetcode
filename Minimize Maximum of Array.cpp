//steps: let the mini value be x
//in order for the max value to be decremented to x at ith index, all the prev values can be incremented 
//in short sum(0-->ith index)<=(i+1)*x

//second part-->let the range of answers be 0-->max value
//eliminate the wrong answers using binary search

class Solution {
public:
    bool valid(vector<int> &nums,int mid){
        long sum=0;
        //if at any point (i+1)*x is larger than the sum-->return false;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if((long)mid*(i+1)<sum){
                return false;
            }
        }
        return true;
    }
    int minimizeArrayValue(vector<int>& nums) {
        int maxi=*max_element(nums.begin(),nums.end());

        //the range of answers-->(0,maxi)
        int start=0;
        int end=maxi;
        
        //apply basic binary search
        while(start<end){
            int mid=start+(end-start)/2;
            if(valid(nums,mid)){
                //we have got a mini possible answer
                //we can search for more by reducing the search space
                end=mid;
            }
            else{
                start=mid+1;
            }
        }
        return start;
    }
};
