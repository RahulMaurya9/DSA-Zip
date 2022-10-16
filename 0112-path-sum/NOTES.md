bool pathSum(TreeNode* root , int targetSum , int nodeSum){
if(root == NULL && targetSum == nodeSum){
return true;
}
if(root == NULL) return false;
cout<< "root value is : " << root->val;
cout<< "node val is : "<< nodeSum<<endl;
return (pathSum(root->left , targetSum , nodeSum + root->val) ||
pathSum(root->right ,targetSum , nodeSum + root->val));
}
bool hasPathSum(TreeNode* root, int targetSum) {
if(root == NULL) return false;
return pathSum(root, targetSum ,0);
}