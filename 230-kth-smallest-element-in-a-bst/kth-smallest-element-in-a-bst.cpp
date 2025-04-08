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
    void inorderTraversalHelper(TreeNode* root, vector<int>& result) {
        if (root == nullptr) return;
        inorderTraversalHelper(root->left, result);
        result.push_back(root->val);
        
        inorderTraversalHelper(root->right, result);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> res;
        inorderTraversalHelper(root,res);
        return res[k-1];
        
    }
};