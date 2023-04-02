// class Solution {
// public:
//     int binarySearch(vector<int> potions,long long success,int spell){
//         long finding=(success+spell-1)/spell;
//         int start=0;
//         int end=potions.size();
        
//         while(start<end){
//             int mid=start+(end-start)/2;
//             if(potions[mid]>=finding){
//                 end= mid;
//             }
//             else{
//                 start=mid+1;
//             }
//         }
//         return start;
//     }
//     vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
//         sort(potions.begin(),potions.end());
//         vector<int> result;
//         for(int spell:spells){
           
//             // int index=binarySearch(potions,success,spell);
//             result.push_back(potions.size()-binarySearch(potions,success,spell));
//         }
//         return result;
//     }
// };

class Solution {
public:
    int valid_pos(vector<int>& potions, long long success, int spell){
        long potion_needed = (success + spell - 1) / spell;

        int l=0,r=potions.size();
        while(l<r){
            int mid = l + (r-l)/2;
            if(potions[mid] >= potion_needed)
                r = mid;
            else
                l = mid + 1;
        }
        return l;
    }

    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(), potions.end());
        vector<int> res;
        for (int spell: spells) {
            res.push_back(potions.size()- valid_pos(potions, success, spell));
        }
        return res;
    }
};
