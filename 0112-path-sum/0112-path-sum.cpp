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

    bool FindWays(TreeNode* root, int target)
    {
        if (root == nullptr) return false;

        target -= root->val;

        bool isLeaf = root->left == nullptr && root->right == nullptr;

        if (isLeaf) return target == 0;
        
        return FindWays(root->left, target)
            || FindWays(root->right, target);
    }

public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        return FindWays(root, targetSum);
    }
};