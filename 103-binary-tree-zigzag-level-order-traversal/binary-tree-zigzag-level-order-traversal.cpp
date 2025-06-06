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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
          vector<vector<int>> ans;
          queue<TreeNode*> q;
          bool ltor = true;
          if(root == NULL){
            return ans;
          }
          q.push(root);
          while(!q.empty()){
            int size = q.size();
            vector<int> level;
            for(int i=0;i<size;i++){
                TreeNode *node1 = q.front();
                q.pop();
                if(node1->left!= NULL){
                    q.push(node1->left);
                }
                if(node1->right!=NULL){
                    q.push(node1->right);
                }
                level.push_back(node1->val);
            }
            if(!ltor){
                reverse(level.begin(),level.end());
            }
            ans.push_back(level);
            ltor = !ltor;
          }

          return ans;
    }

};