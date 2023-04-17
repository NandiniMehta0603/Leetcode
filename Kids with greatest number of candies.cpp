class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int maxi=*max_element(candies.begin(),candies.end());

        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies<maxi){
                //means lesse then the max value
                ans.push_back(false);
            }
            else if(candies[i]+extraCandies>=maxi){
                ans.push_back(true);
            }
        }
        return ans;
    }
};
