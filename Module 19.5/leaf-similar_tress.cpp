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

//  void preorder(TreeNode * root , vector<int>&leaves){

//     if(!root){
//         return; 
//     }

//     if(root -> left == NULL && root -> right == NULL){
//         leaves.push_back(root -> val);
//         return;
//     }
//     preorder(root -> left, leaves);
//     preorder(root -> right, leaves);
//  }

// class Solution {
// public:
//     bool leafSimilar(TreeNode* root1, TreeNode* root2) {
//         vector<int> v1, v2;
//         preorder(root1, v1);
//         preorder(root2, v2);
//         if(v1 == v2){
//             return true; 
//         }
//         else{
//             return false; 
//         }
//     }
// };