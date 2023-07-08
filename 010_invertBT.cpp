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

class Solution {
public:
    // inverting a BT
    TreeNode* invertTree(TreeNode* root) {
        if (root == NULL) {
            return NULL;
        }

        //swapping the children
        TreeNode* temp = root -> left;
        root -> left = root -> right;
        root -> right = temp;

        // recursively swapping every subtree
        invertTree(root -> left);
        invertTree(root -> right);

        return root;
    }
};