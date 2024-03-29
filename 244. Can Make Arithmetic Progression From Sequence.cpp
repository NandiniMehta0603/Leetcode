class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        int n=arr.size();
        if(n<=2){
            return true;
        }
        sort(arr.begin(),arr.end());
        //let d be the difference
        int d=arr[1]-arr[0];
        for(int i=1;i<n-1;i++){
            if(arr[i+1]-arr[i]!=d){
                return false;
            }
        }
        return true;
    }
};
