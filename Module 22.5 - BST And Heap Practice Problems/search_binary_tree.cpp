// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// vector<int> v;

// class Solution {
// public:
//     TreeNode* searchBST(TreeNode* root, int val) {
//         if(root == NULL){
//             return NULL;
//         }
//         if (root->val == val) {
//             return root; 
//         }

//         if (val < root->val) {
//             return searchBST(root->left, val);  // Search in the left subtree
//         } else {
//             return searchBST(root->right, val);  // Search in the right subtree
//         }
    
//     }
// };