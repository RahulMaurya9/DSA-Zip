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
    vector<int> vec;
    int len = 0;
    void recoverTree(TreeNode* root) {
        fillVec(root);
        sort(vec.begin() , vec.end());
        CorrectBst(root);
    }
    void fillVec(TreeNode* root){
        if(!root) return ;
        fillVec(root->left);
        vec.push_back(root->val);
        fillVec(root->right);
    }
    void CorrectBst(TreeNode* root){
        if(!root) return;
        CorrectBst(root->left);
        cout<<"vec "<< len << " : root -> val " << root->val<<endl;
        if(vec[len] != root->val){
            root->val = vec[len];
        } 
        ++len;
        CorrectBst(root->right);
    }
};