class Solution {
public:
    int strStr(string haystack, string needle) {
        int index=haystack.find(needle);
        if(index<haystack.length())
        {
            return index;
        }
        return -1;
    }
};
