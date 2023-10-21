#include <iostream>
#include <climits>

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return isValidBSTHelper(root, LONG_MIN, LONG_MAX);
    }

    bool isValidBSTHelper(TreeNode* node, long long lower, long long upper) {
        if (node == NULL) {
            return true;
        }

        if (node->val <= lower || node->val >= upper) {
            return false;
        }

        // For the left subtree, the upper limit becomes the current node's value
        // For the right subtree, the lower limit becomes the current node's value
        return isValidBSTHelper(node->left, lower, node->val) && isValidBSTHelper(node->right, node->val, upper);
    }
};

int main() {
    // Example usage:
    // TreeNode* root = new TreeNode(2);
    // root->left = new TreeNode(1);
    // root->right = new TreeNode(3);
    
    // Call isValidBST() to check if the binary tree represented by 'root' is a valid BST.
    return 0;
}
