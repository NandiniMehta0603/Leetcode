class Solution {
public:
    bool buddyStrings(string s, string goal) {
        int out_place=0;
        if(s.length()!=goal.length()){
            return false;
        }
        string s_temp=s;
        string g_temp=goal;
        sort(s_temp.begin(),s_temp.end());
        sort(g_temp.begin(),g_temp.end());
        if(s_temp!=g_temp){
            return false;
        }
        unordered_set<char> st;
        for(int i=0;i<s.length();i++){
            if(s[i]!=goal[i]){
                out_place++;
                
            }
            st.insert(s[i]);
        }

        if(out_place==2){
            return true;
        }
        else if(out_place==0 && st.size()!=s.length()){
            //all unique 
            return true;
        }
        else{
            return false;
        }
    }
};
