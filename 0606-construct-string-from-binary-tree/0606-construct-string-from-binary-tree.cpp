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
    void tree2str(TreeNode* root , string& ans){
        if(!root) return;
        ans += to_string(root->val);
        if(root->left){
            ans+= '(';
            tree2str(root->left , ans);
            ans+= ')';
        }
        if(root->right){
            if(!root->left) ans+= "()";
            ans+= '(';
            tree2str(root->right , ans);
            ans+= ')';
            
        }
    }
    string tree2str(TreeNode* root) {
        string ans;
        tree2str(root, ans);
        return ans;
    }
    
};