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
    void Level(TreeNode* root,vector<vector<int>> &ans){
        queue<TreeNode*> q;
       
        q.push(root);
        
        while(!q.empty()){
            int s = q.size();
            vector<int> level;
            for(int i=0;i<s;i++){
                TreeNode* node = q.front();
                q.pop();
                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }
                level.push_back(node->val);
            }
            ans.push_back(level);
        }
        
    }
    int deepestLeavesSum(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL){
            return 0;
        }
        Level(root,ans);
        int s = ans.size();
        int sum =0;
        int s1 = ans[s-1].size();
        for(int i=0;i<s1;i++){
            sum=sum+ans[s-1][i];
        }
        return sum;
    }
};