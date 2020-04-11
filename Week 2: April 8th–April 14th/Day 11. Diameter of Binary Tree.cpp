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
    int getDiameter(TreeNode* root, int& depth){
        if(root == NULL) return 0;
        int lft = getDiameter(root->left, depth); 
        int rgt = getDiameter(root->right, depth);
        depth = max(depth, lft + rgt);
        return 1 + max(lft, rgt);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int depth = 0;
        getDiameter(root, depth);
        return depth;
    }
};
