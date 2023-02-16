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
    int height(TreeNode *root){
        //base case
        if(root==NULL){
            return 0;
        }

        int left=height(root->left);
        int right=height(root->right);
        int maxi=max(left,right)+1;
        return maxi;
    }

    int maxDepth(TreeNode* root) {
        return height(root);
    }
};
