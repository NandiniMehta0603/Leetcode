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
    bool solve(TreeNode *l, TreeNode *r){
        //base case
        if(l==NULL || r==NULL){
            return l==r;
        }
        if(l->val==r->val){
            return solve(l->left,r->right)&&solve(l->right,r->left);
        }
        return false;
    }
    bool isSymmetric(TreeNode* root) {
        return solve(root->left,root->right);
    }
};
