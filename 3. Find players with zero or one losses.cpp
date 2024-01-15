class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int> mp;
        for(int i=0;i<matches.size();i++){
            int first=matches[i][0];
            int second=matches[i][1];
            mp[second]++;
            if(!mp[first]){
                mp[first]=0;
            }
        }
        vector<vector<int>> result;
        vector<int> first;
        vector<int> second;

        for(auto i:mp){
            if(i.second==0){
                first.push_back(i.first);
            }
            else if(i.second==1){
                second.push_back(i.first);
            }
        }
        sort(first.begin(),first.end());
        sort(second.begin(),second.end());
        result.push_back(first);
        result.push_back(second);
        return result;

    }
};
