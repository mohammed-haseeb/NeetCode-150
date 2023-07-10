#include<bits/stdc++.h>
using namespace std;

/****************************************************************/
class TreeNode {
    public:
    int val;
    TreeNode *left;
    TreeNode *right;
    
    TreeNode(int val) {
        this -> val = val;
        left = right = NULL;
    }
};
/****************************************************************/

//check if Balanced BT
class Solution {
    bool isValid = true;
public:
    int height(TreeNode *root) {
        if (root == NULL) {
            return 0;
        }

        int leftHeight = height(root -> left);
        int rightHeight = height(root -> right);

        if (isValid && abs(leftHeight - rightHeight) > 1) {
            isValid = false;
        }
        
        return 1 + max(leftHeight, rightHeight);
    }

    bool isBalanced(TreeNode* root) {
      height(root);
      return isValid;
    }
};