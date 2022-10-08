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
    int ans;
    int sum(TreeNode* root, int& c){
        if(!root)return 0;
        c++;
        int left = sum(root->left, c);
        int right = sum(root->right, c);
        return (root->val+ left+right);
        
    }
    void solve(TreeNode* root){
        if(root == NULL)return ;
        int c=0;
        int avg = (sum(root,c))/c;
        if(avg == root->val)ans++;
        solve(root->left);
        solve(root->right);
    }
    int averageOfSubtree(TreeNode* root) {
        solve(root);
        return ans;
    }
};