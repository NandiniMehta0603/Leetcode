class Solution {
public:
    string predictPartyVictory(string senate) {
        //step1: create 2 queues
        queue<int> rad;
        queue<int> dir;
        int n=senate.size();
        for(int i=0;i<n;i++){
            if(senate[i]=='R'){
                rad.push(i);
            }
            else{
                dir.push(i);
            }
        }

        //start comparing the fronts
        while(!rad.empty() && !dir.empty()){
            if(rad.front()<dir.front()){
                //rad wins 
                rad.pop();
                dir.pop();
                n++;
                rad.push(n);
            }
            else{
                //dir wins
                rad.pop();
                dir.pop();
                n++;
                dir.push(n);
            }
        }
        if(!rad.empty()){
            return "Radiant";
        }
        else{
            return "Dire";
        }
    }
};
