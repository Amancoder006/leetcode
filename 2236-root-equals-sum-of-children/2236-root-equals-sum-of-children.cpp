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
    int check(TreeNode* root){
        if(root->left == nullptr && root->right==nullptr)return root->val;
        int left = check(root->left);
        int right = check(root->right);
        // if(left==nullptr && right==nullptr)return root->val;
        if(root->val==left+right)return root->val;
        return INT_MIN;
    }
    bool checkTree(TreeNode* root) {
        return check(root)==INT_MIN? 0 : 1;
        
    }
};