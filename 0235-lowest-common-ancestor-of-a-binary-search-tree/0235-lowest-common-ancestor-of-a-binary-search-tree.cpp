/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL || p == root ||  q == root) return root;
        TreeNode* leftlca = lowestCommonAncestor(root->left , p, q);
        TreeNode* rightlca = lowestCommonAncestor(root->right , p , q);
        if(leftlca == NULL) return rightlca;
        else if (rightlca == NULL) return leftlca;
        else return root;
        
        
    }
};