class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        //apply binary search
        //search for a number just greater than target
        int start=0;
        int end=letters.size()-1;
        //compare the ascii values 
        int mid=(start+end)/2;
        char ans=letters[0];
        while(start<=end){
            if(letters[mid]-'0'<=target-'0'){
                start=mid+1;
            }
            else if(letters[mid]-'0'>target-'0'){
                ans=letters[mid];//one possible ans
                end=mid-1;
            }
            mid=(start+end)/2;
        }
        return ans;
    }
};
