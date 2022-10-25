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
    int kthSmallest(TreeNode* root, int k) {
        set<int> s;
        kthSmallest(root, k , s);
        int index = 1;
        int data = 0;
        for(auto& it : s){
            if(index == k){
                data = it;
                break;
            }    
            index++;
        }
        
        return data ;
    }
    void kthSmallest(TreeNode* root , int k , set<int>& s ){
        if(!root) return ;
        s.insert(root->val);
        kthSmallest(root->left , k , s);
        kthSmallest(root->right , k, s);
    }
};