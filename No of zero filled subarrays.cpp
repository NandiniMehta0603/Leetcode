
class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long count=0;
        long temp=0;
        for(int n:nums){
            if(n==0){
                count+= ++temp;
            }
            else{
                temp=0;
            }
        }
        return count;
    }
};
