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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* Head;
        if(root==NULL){
            TreeNode* data = new TreeNode(val);
            Head = data;
            return Head;
        }
        Head = root;
        
        while(root){
            if(val > root->val){
                if(root->right == nullptr){
                    TreeNode* data = new TreeNode(val) ;
                    root->right = data;
                    return Head;
                }
                else{
                    root = root->right;
                }
            }
            else{
                if(root->left == NULL){
                    TreeNode* data = new TreeNode(val);
                    root->left = data;
                    return Head;
                }
                else{
                    root= root->left;
                }
            }
        }
        return Head;
        
    }
};