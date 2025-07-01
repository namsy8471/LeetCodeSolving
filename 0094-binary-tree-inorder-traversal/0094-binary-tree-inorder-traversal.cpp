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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ret;

        if(root != nullptr)
            recursion(ret, root);

        return ret;
    }

    void recursion(vector<int>& v, TreeNode* node)
    {
        
        if(node->left != nullptr) recursion(v, node->left);

        v.push_back(node->val);
        if(node->right != nullptr) recursion(v, node->right);
    }
};