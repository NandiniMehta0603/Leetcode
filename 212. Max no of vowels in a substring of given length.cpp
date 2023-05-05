class Solution {
public:
    int isVowel(char c){
        if(c=='a'|| c=='e' || c=='i' || c=='o' || c=='u'){
            return 1;
        }
        return 0;
    }
    int maxVowels(string s, int k) {
        int max_vow=0;
        int curr_vow=0;
        for(int i=0;i<s.size();i++){
            curr_vow+=isVowel(s[i]);
            if(i>=k){
                curr_vow=curr_vow-isVowel(s[i-k]);
            }
            max_vow=max(max_vow,curr_vow);
        }
        return max_vow;
    }
};
