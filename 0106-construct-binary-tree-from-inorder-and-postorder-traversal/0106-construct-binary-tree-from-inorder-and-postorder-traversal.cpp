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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int postIndex = postorder.size()-1;
        return buildTree(inorder , postorder , postorder.size()-1 , 0, postIndex);
    }
    TreeNode* buildTree(vector<int>& inorder , vector<int>&postorder, int is , int ie, int& pind){
        cout<<"value of is start"<<is<<" value of is end "<<ie<< " and value of postIndex "<< pind<<endl;
        if(is<ie) return NULL;
        TreeNode* root = new TreeNode(postorder[pind--]);
        int Indx;
        for(int i = 0 ; i< inorder.size()-1 ; ++i){
            if(root->val ==inorder[i]){
                Indx = i;
                break;
            }
        }
        int limit = is - Indx;
        cout<<"right call"<<endl;
        root->right = buildTree(inorder , postorder , is , is-limit+1, pind);
        cout<<"left call"<<endl;
        root->left = buildTree(inorder , postorder , is-limit-1 , ie,pind);
        
        return root;
        
        
    }
};