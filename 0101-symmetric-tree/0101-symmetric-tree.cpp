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
    bool isSymmetric(TreeNode* root) {
        return checkRecursion(root->left, root->right);
    }

    bool checkRecursion(TreeNode* leftNode, TreeNode* rightNode)
    {
        if (leftNode == nullptr && rightNode == nullptr)
            return true;
        
        if (leftNode == nullptr || rightNode == nullptr || leftNode->val != rightNode->val)
            return false;
        
        return checkRecursion(leftNode->left, rightNode->right) 
            && checkRecursion(leftNode->right, rightNode->left);
    }
};