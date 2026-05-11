class Solution {
public:

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* left = NULL;
        TreeNode* right = NULL;
        if(root == NULL)
            return NULL;
        if(root == p || root == q)
            return root;

        if(root->left){
            left = lowestCommonAncestor(root->left, p, q);
        }

        if(root->right){
            right = lowestCommonAncestor(root->right, p, q);
        }
        if(left && right)
            return root;
        if(left)
            return left;

        return right;
    }
};