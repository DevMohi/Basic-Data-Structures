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

//  bool preorder(TreeNode *root, TreeNode *root2) {
//     if (root == NULL && root2 == NULL) {
//         return true;
//     }
//     if (root == NULL || root2 == NULL) {
//         return false;
//     }

//     bool same = root -> val == root2 -> val;
//     bool left = preorder(root -> left , root2 -> left);
//     bool right = preorder(root -> right , root2 -> right);

//     return same && left && right; 

//     // return (root->val == root2->val) &&
//     //        preorder(root->left, root2->left) &&
//     //        preorder(root->right, root2->right);
// }


// class Solution {
// public:
//     bool isSameTree(TreeNode* p, TreeNode* q) {
//         return preorder(p,q); 
//     }
// };