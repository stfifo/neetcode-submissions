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
    bool balanced = true;
public:
    int how_depth(TreeNode* root) {
        if (root == nullptr) return 0;
        int left = how_depth(root->left);
        int right = how_depth(root->right);
        if (abs(left-right)>1) {
            balanced = false;
            return 0;
        }
        return 1 + max(left, right);
    }

    bool isBalanced(TreeNode* root) {
        if (root == nullptr) return true;
        how_depth(root);
        return balanced;
    }
};
