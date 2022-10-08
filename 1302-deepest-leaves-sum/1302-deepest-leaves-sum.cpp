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
    int s=0,deep=0;
    int deepestLeavesSum(TreeNode* root,int d=0) {
        if(!root)return 0;
        if(!root->left && !root->right){
           if(d==deep)s +=root->val;
            else if(d>deep){s = root->val;deep=d;}
        }
        
        deepestLeavesSum(root->left,d+1);
        deepestLeavesSum(root->right,d+1);
        
        return s;
    }
};