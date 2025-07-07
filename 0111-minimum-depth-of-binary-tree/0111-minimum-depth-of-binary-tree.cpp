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

    int getMinDepthOfTree(TreeNode* root)
    {
        if (root == nullptr) {
            return 0;
        }

        int leftDepth = getMinDepthOfTree(root->left);
        int rightDepth = getMinDepthOfTree(root->right);

        if (leftDepth == 0) return 1 + rightDepth;
        else if (rightDepth == 0) return 1 + leftDepth;
        else return 1 + min(leftDepth, rightDepth);
    }

public:
    int minDepth(TreeNode* root) {
        return getMinDepthOfTree(root);
    }
};