#include<bits/stdc++.h>
using namespace std;


// inverting a BT
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (root == NULL) {
            return NULL;
        }

        TreeNode* temp = root -> left;
        root -> left = root -> right;
        root -> right = temp;

        invertTree(root -> left);
        invertTree(root -> right);

        return root;
    }
};