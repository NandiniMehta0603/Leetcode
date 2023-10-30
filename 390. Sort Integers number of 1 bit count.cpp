class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        unordered_map<int,vector<int>> mp;
        for(int i:arr){
            mp[bitset<32>(i).count()].push_back(i);
        }
        vector<int> result;
        for(int k=0;k<=31;k++){
            if(mp.find(k)!=mp.end()){
                sort(mp[k].begin(),mp[k].end());
                result.insert(result.end(),mp[k].begin(),mp[k].end());
            }
        }
        return result;
    }
};
