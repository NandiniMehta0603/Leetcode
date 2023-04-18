class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans="";

        int len1=word1.length();
        int len2=word2.length();

        if(len1>len2){
            int i=0;
            int j=0;
            while(j<len2){
                ans.push_back(word1[i]);
                ans.push_back(word2[j]);
                i++;
                j++;
            }

            //for the rest of the len1
            while(i<len1){
                ans.push_back(word1[i]);
                i++;
            }
        }
        else{
            int i=0;
            int j=0;
            while(i<len1){
                ans.push_back(word1[i]);
                ans.push_back(word2[j]);
                i++;
                j++;
            }
            while(j<len2){
                ans.push_back(word2[j]);
                j++;
            }
        }

        return ans;
    }
};
