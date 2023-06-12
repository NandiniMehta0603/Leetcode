class Solution {
public:
    // vector<string> summaryRanges(vector<int>& nums) {
    //     int a=0;
    //     int b=0;
    //     int i=0;
    //     int n=nums.size();
    //     vector<string> result;
    //     while(i<n && a<n && b<n){
    //         if(nums[i+1]-nums[i]==1){
    //             i=i+1;
    //             b=i;
    //         }
    //         else if(nums[i+1]-nums[i]>1 || i+1==n){
    //             string ans="";
    //             if(a!=b){
    //                 ans+=to_string(nums[a]);
    //                 ans+="->";
    //                 ans+=to_string(nums[b]);
    //             }else{
    //                 ans+=to_string(nums[a]);
    //             }
    //             result.push_back(ans);
    //             i=i+1;
    //             a=i;
    //             b=i;
    //         }
            
    //     }
    //     return result;
    // }
    vector<string> summaryRanges(vector<int>& nums) {
    int a = 0;
    int b = 0;
    int i = 0;
    int n = nums.size();
    vector<string> result;
    
    while (i < n) {
         if (i + 1 < n && (long)nums[i + 1] - nums[i] == 1){
            b = i + 1;
        }
        else {
            string ans = to_string(nums[a]);
            if (a != b) {
                ans += "->" + to_string(nums[b]);
            }
            result.push_back(ans);
            a = i + 1;
            b = i + 1;
        }
        i++;
    }
    
    return result;
}

};
