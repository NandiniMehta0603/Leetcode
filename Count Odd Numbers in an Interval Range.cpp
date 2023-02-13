class Solution {
public:
    int countOdds(int low, int high) {
        //base case
        if(low==high){
            if(low%2==0){
                //even number
                return 0;
            }else{
                //odd number
                return 1;
            }
        }

        // if(high-low==1){
        //     return 1;
        // }
        int ans=0;
        //first case
        //both even
        if(low%2==0 && high%2==0){
            ans=(high-low+1)/2;
        }

        //second case
        //if low=even and hihg=odd
        else if(low%2==0 && high%2!=0){
            ans=((high-low)/2)+1;
        }

        //third case
        //vice versa of second
        else if(low%2!=0 && high%2==0){
            ans=((high-low)/2)+1;
        }
        
        //last case
        //if both are odd
        else{
            ans=((high-low)/2)+1;
        }

        return ans;
    }
};
