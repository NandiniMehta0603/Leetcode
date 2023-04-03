//steps: take 2 pointers: right and the left pointer--> we have to make a choice if 2 people will sit on the boat or a single person will sit
//sort the array-->heaviest person will have to board the boat
//so the right most person will be on the boat for sure--> try to see if the lighest person will fit into the boat with him
//if yes then left++ else only right-- and left pointer remains on the same person

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int left=0;
        int right=people.size()-1;
        int count=0;
        while(left<=right){
            if(people[left]+people[right]<=limit){
                count++;
                right--;
                left++;
            }
            else{
                count++;
                right--;
            }
        }
        return count;
    }
};
