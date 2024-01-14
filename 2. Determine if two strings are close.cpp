class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.length()!=word2.length()){
            return false;
        }
        set<char> st1;
        set<char> st2;

        for(int i=0;i<word1.length();i++){
            st1.insert(word1[i]);
        }
        for(int i=0;i<word2.length();i++){
            st2.insert(word2[i]);
        }
        if(st1!=st2){
            return false;
        }

        vector<int> temp1(26,0);
        vector<int> temp2(26,0);

        for(int i=0;i<word1.length();i++){
            int index=word1[i]-'a';
            temp1[index]++;
        }
        for(int i=0;i<word2.length();i++){
            int index=word2[i]-'a';
            temp2[index]++;
        }

        // int count1=0;
        // int count2=0;
        // for(int i=0;i<26;i++){
        //     count1+=temp1[i];
        //     count2+=temp2[i];
        // }
        // if(count1!=count2){
        //     return false;
        // }

        unordered_map<int,int> mp1;
        unordered_map<int,int> mp2;

        for(int i=0;i<26;i++){
            int freq=temp1[i];
            mp1[freq]++;

            int freq2=temp2[i];
            mp2[freq2]++;
        }
        if(mp1!=mp2){
            return false;
        }

        // cout<<count1<<" "<<count2<<endl;
        return true;
    }
};
