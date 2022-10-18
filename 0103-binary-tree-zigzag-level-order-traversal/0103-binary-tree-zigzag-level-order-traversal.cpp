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
    int count = 0;
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root ) return ans;
        
        queue<TreeNode*> que;
        que.push(root);
        while(!que.empty()){
            int size = que.size();
            vector<int> vec;
            for(int i = 0 ; i < size ; ++i){
                TreeNode* cur = que.front();
                que.pop();
                if(cur->left != NULL) que.push(cur->left);
                if(cur->right != NULL) que.push(cur->right);
                vec.push_back(cur->val);
            }
            if(count & 1) reverse(vec.begin() , vec.end());
            ans.push_back(vec);
            ++count;
        }
        return ans;
    }
};