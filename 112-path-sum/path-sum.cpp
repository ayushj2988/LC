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
    bool dfs(TreeNode* root ,int curr ,int targetSum){
        if(root==NULL) return false;
        curr+=root->val;
        if(root->left==NULL and root->right==NULL){
            return curr==targetSum;
        }
        return dfs(root->left,curr,targetSum) || dfs(root->right,curr,targetSum);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return dfs(root,0,targetSum);
    }
};