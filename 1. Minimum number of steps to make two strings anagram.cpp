class Solution {
public:
    int minSteps(string s, string t) {
        if(s.length()!=t.length()){
            return -1;
        }

        vector<int> first(26,0);
        vector<int> second(26,0);

        for(int i=0;i<s.length();i++){
            int index=s[i]-'a';
            first[index]++;
        }
        for(int i=0;i<t.length();i++){
            int index=t[i]-'a';
            second[index]++;
        }
        int count=0;

        for(int i=0;i<26;i++){
            if(first[i]>second[i]){
                count+=(first[i]-second[i]);
            }
        }
        return count;
    }
};
