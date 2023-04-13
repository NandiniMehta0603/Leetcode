class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        // stack<int> st;
        // int j=0;
        // int i=0;
        // //step1: fill the stack till pop[0]
        // while(pushed[i]!=popped[j]){
        //     st.push(pushed[i]);
        //     i++;
        // }
        // st.push(pushed[i]);
        // i++;

        // //step2: apply the main conditions
        // while(j<popped.size() || !st.empty()){
        //     if(i<pushed.size()){
        //         if(pushed[i]==popped[j] && i<pushed.size()){
        //         st.push(pushed[i]);
        //         i++;
        //         }
        //         if(st.top()==popped[j]){
        //             st.pop();
        //             j++;
        //         }
        //         else if(st.top()!=popped[j]){
        //             return false;
        //         }
        //     }
        // }
        // if(j<popped.size() || !st.empty()){
        //     return false;
        // }
        // return true;
        // // return st.size()==0;


        stack<int> st;
        int j=0;
        for(int x:pushed){
            st.push(x);
            while(st.size() && st.top()==popped[j]){
                st.pop();
                j++;
            }
        }
        return st.size()==0;
    }
};
