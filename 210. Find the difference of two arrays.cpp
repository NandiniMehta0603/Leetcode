class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        //brute force
        //using sets
        unordered_set<int> set1(nums1.begin(),nums1.end());
        unordered_set<int> set2(nums2.begin(),nums2.end());

        // for(int i=0;i<nums1.size();i++){
        //     set1[nums1[i]]++;
        // }
        // for(int i=0;i<nums2.size();i++){
        //     set2[nums2[i]]++;
        // }


        //getting back to the ans
        vector<vector<int>> ans;
        vector<int> ans1;
        vector<int> ans2;
        for(auto i:set1){
            if(set2.count(i)==0){
                ans1.push_back(i);
            }
        }
        for(auto i:set2){
            if(set1.count(i)==0){
                ans2.push_back(i);
            }
        }
        ans.push_back(ans1);
        ans.push_back(ans2);
        return ans;
    }
};
