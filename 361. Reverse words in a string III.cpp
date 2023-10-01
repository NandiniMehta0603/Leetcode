class Solution {
public:
    void reverse_string(string &temp,int start,int end){
        int e=end-1;
        while(start<=e){
            swap(temp[start],temp[e]);
            start++;
            e--;
        }
    }
    string reverseWords(string s) {
        string temp=s;
        temp+=" ";
        // int i=0;
        int start=0;
        int end=0;
        while(end<temp.length()){
            if(temp[end]==' '){
                // reverse(temp.begin()+start,temp.begin()+start+end-1);
                reverse_string(temp,start,end);
                end++;
                start=end;
            }
            else{
                end++;
            }
        }
        temp=temp.substr(0,temp.length()-1);
        return temp;
    }
};
