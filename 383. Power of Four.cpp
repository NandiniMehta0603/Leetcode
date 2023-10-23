class Solution {
public:
    bool isPowerOfFour(int n) {
        for(int i=0;i<=15;i++){
            int temp=pow(4,i);
            if(temp==n){
                return true;
            }
            if(temp>n){
                return false;
            }
        }
        return false;
    }
};
