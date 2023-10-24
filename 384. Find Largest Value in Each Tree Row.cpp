/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        vector<int> ans;
        if(root==NULL){
            return ans;
        }
        queue<pair<TreeNode*,int>> q;
        q.push(make_pair(root,0));
        while(!q.empty()){
            int s=q.size();
            int maxi=INT_MIN;
            for(int i=0;i<s;i++){
                pair<TreeNode*,int> temp=q.front();
                q.pop();
                if(temp.first->val>maxi){
                    maxi=temp.first->val;
                }
                if(temp.first->left){
                    q.push(make_pair(temp.first->left,temp.second+1));
                }
                if(temp.first->right){
                    q.push(make_pair(temp.first->right,temp.second+1));
                }
            }
            ans.push_back(maxi);
        }
        return ans;
    }
};
