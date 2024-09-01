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

// bool univalued(TreeNode * root, int val){
//     if(root == NULL){
//         return true; 
//     }

//     if(root -> val != val){
//         return false; 
//     }
    

//     bool l = univalued(root -> left , val);
//     bool r = univalued(root -> right, val);


//     //Here bool returns true and false so we compare true or false values 
//     if(l == true && r == true){
//         return true;
//     }
//     else{
//         return false; 
//     }
// }

// class Solution {
// public:
//     bool isUnivalTree(TreeNode* root) {
//         if (root == NULL) return true;
//         return univalued(root, root->val);
//     }
// };