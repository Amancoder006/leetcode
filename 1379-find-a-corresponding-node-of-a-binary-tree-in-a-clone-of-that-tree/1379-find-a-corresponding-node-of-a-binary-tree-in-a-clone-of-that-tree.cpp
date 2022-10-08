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
   TreeNode* ans;
    TreeNode* getTargetCopy(TreeNode* og, TreeNode* cd, TreeNode* tt) {
        if(cd==NULL)return cd;
        
        if(cd->val==tt->val)ans=cd;
         getTargetCopy(og,cd->left,tt);
         getTargetCopy(og,cd->right,tt);
        
        return ans;
    }
};