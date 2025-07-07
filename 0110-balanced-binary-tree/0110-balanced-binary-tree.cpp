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

    int getDepthOfTree(TreeNode* root)
    {
        if (root == nullptr) {
            return 0;
        }

        int leftDepth = getDepthOfTree(root->left);
        if (leftDepth == -1) return -1;

        int rightDepth = getDepthOfTree(root->right);
        if (rightDepth == -1) return -1;

        if (abs(leftDepth - rightDepth) > 1) return -1;

        return 1 + max(leftDepth, rightDepth);
    }

public:
    bool isBalanced(TreeNode* root) {
        return getDepthOfTree(root) != -1;
    }
};