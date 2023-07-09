#include<bits/stdc++.h>
using namespace std;

// In question, its only maxDepth, but since pretty similar, I've done minDepth as well

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


// Max Depth of BT
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }

        int leftDepth = maxDepth(root -> left);
        int rightDepth = maxDepth(root -> right);

        return 1 + max(leftDepth, rightDepth); // 1 is for adding the current node itself
    }
};


// Min Depth of BT
class Solution {
public:
    int minDepth(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }

        int leftDepth = minDepth(root -> left);
        int rightDepth = minDepth(root -> right);

        if (leftDepth == 0 || rightDepth == 0) {
            // for the non-null part, it'll simply add zero and return with non-zero subtree
            // or else if min(left, right) used, then it'll always take 0 and we'll be getting wrong answers
            return 1 + (leftDepth + rightDepth); 
        }

        return 1 + min(leftDepth, rightDepth);
    }
};