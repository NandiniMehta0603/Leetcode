class Solution {
public:
    string longestPalindrome(string s) {
        int ans=INT_MIN;
        string res="";
        for(int i=0;i<s.length();i++){
            //even
            int start=i;
            int end=i+1;
            while(start>=0 && end<s.length() && s[start]==s[end]){
                if(end-start+1>ans){
                    ans=end-start+1;
                    res=s.substr(start,ans);
                }
                start--;
                end++;
            }
            //odd
            start=i-1;
            end=i+1;
            while(start>=0 && end<s.length() && s[start]==s[end]){
                if(end-start+1>ans){
                    ans=end-start+1;
                    res=s.substr(start,ans);
                }
                start--;
                end++;
            }
        }
        if(res==""){
            res+=s[0];
        }
        return res;
    }
};
