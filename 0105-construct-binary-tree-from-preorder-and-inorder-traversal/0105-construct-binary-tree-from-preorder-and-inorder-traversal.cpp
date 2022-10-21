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
    int preindex = 0;
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        // map<int , int> vMap;
        // for(int i = 0 ;  i< preorder.size() ; ++i){
        //     vMap[inorder[i]] = i;
        // }
         // return buildTree(preorder,0, preorder.size() -1 , inorder , 0 , inorder.size() -1 , vMap);
        return buildTree(preorder , inorder , 0 , preorder.size() -1);
    }
    
//     TreeNode* buildTree(vector<int>& preorder , int preStart , int preEnd, vector<int>& inorder, int inStart , int inEnd                            , map<int ,int> vmap){
//         if(preStart>preEnd || inStart>inEnd) return NULL;
        
//         TreeNode* root = new TreeNode(preorder[preStart]);
//         int inRoot = vmap[root->val];
//         int lim = inRoot - inStart;
//         root->left = buildTree(preorder , preStart +1, preStart + lim , inorder , inStart ,inRoot-1, vmap);
//         root->right = buildTree(preorder , preStart + lim + 1, preEnd , inorder , inRoot+1 , inEnd, vmap);
//         return root;
        
        
//     }
    TreeNode* buildTree(vector<int>& preorder , vector<int>& inorder , int is , int ie){
        if(is>ie) return NULL;
        TreeNode* node = new TreeNode(preorder[preindex++]);
        int indx;
        for(int i = is ; i<=ie ; i++){
            if(inorder[i] == node->val){
                indx = i;
                break;
                
            }
        }
        node->left = buildTree(preorder , inorder , is , indx-1);
        node->right = buildTree(preorder , inorder , indx +1 , ie);
        return node;
    }
};