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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return checkRecursion(p, q);
    }

    bool checkRecursion(TreeNode* n1, TreeNode* n2)
    {
        if (n1 == nullptr && n2 == nullptr) return true;
        else if (n1 == nullptr || n2 == nullptr) return false;

        if (n1->val != n2->val) return false;

        bool ret1 = true;
        bool ret2 = true;

        if (n1->left == nullptr && n2->left == nullptr) ret1 = true;
        else if (n1->left == nullptr || n2->left == nullptr) return false;
        else
        {
            if (n1->left->val == n2->left->val) {
                ret1 = checkRecursion(n1->left, n2->left);
            }
            else return false;
        }

        if (n1->right == nullptr && n2->right == nullptr) ret2 = true;
        else if (n1->right == nullptr || n2->right == nullptr) return false;
        else
        {
            if (n2->right->val == n2->right->val) {
                ret2 = checkRecursion(n1->right, n2->right);
            }
            else return false;
        }

        return ret1 && ret2;
    }
};