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

 //do inorder traversal and then store the values of the tree into a vector
 //find the min diff of numbers in that vector
class Solution {
public:

    void inorder(TreeNode *root,vector<int> &ans){
        //base case
        if(root==NULL){
            return ;
        }
        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans);
    }
    int minDiffInBST(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        vector<int> ans;
        inorder(root,ans);

        int mini=INT_MAX;

        for(int i=1;i<ans.size();i++){
            mini=min(mini,ans[i]-ans[i-1]);
        }
        return mini;
    }
};
