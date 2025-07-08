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

private:

    bool FindWays(TreeNode* root, int nodeSum, int target)
    {
        if (root == nullptr) return false;
        int sum = root->val + nodeSum;

        if (sum == target && root->left == nullptr && root->right == nullptr) return true;

        if (root->left == nullptr) {
            return FindWays(root->right, root->val + nodeSum, target);
        }
        if (root->right == nullptr) {
            return FindWays(root->left, root->val + nodeSum, target);
        }
        
        return FindWays(root->left, root->val + nodeSum, target)
            || FindWays(root->right, root->val + nodeSum, target);
    }

public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        return FindWays(root, 0, targetSum);
    }
};