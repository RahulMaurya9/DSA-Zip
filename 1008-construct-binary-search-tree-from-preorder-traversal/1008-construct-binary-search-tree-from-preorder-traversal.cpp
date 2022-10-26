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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* head = new TreeNode(preorder[0]);
        for(int  i = 1 ; i < preorder.size() ; ++i){
            auto it = makeBst(head, preorder[i]);
        }
        return head;
    }
    TreeNode* makeBst(TreeNode* root , int key){
        if(!root){
            return new TreeNode(key);
        }
        if(key > root->val){
            root->right = makeBst(root->right , key);
        }
        else{
            root->left = makeBst(root->left , key);
        }
        return root;
    }
};