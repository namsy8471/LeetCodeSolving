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
    int maxDepth(TreeNode* root) {
        return checkRecursion(root, 1);
    }

    int checkRecursion(TreeNode* root, int depth)
    {
        if (root == nullptr) return depth - 1;
        if (root->left == nullptr &&
            root->right == nullptr) return depth;

        return max(checkRecursion(root->left, depth + 1),
            checkRecursion(root->right, depth + 1));

    }
};