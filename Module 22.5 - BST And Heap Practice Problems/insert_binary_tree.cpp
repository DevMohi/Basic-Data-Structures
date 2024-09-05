// /*
//     Time Complexity: O(N)
//     Space Complexity: O(N)

//     Where N is the total number of nodes in the given tree.
// */

// // Recursive  function to insert new node in correct position
// TreeNode<int>* insertionInBST(TreeNode<int>* root, int val)
// {
//     // If root is null, return a new node with given value.
//     if (root == NULL)
//     {
//         TreeNode<int>* node = new TreeNode<int> (val);
//         return node;
//     }

//     /*
//         If given value is less than root node's value, then node will insert in 
//         left subtree of root node Else it will insert in right subtree of root node.
//     */

//     if (root->val > val)
//     {
//         // Call recursive function with left child and update left subtree.
//         root->left = insertionInBST(root->left, val);
//     }

//     else
//     { 
//         // Call recursive function with right child and update right subtree.
//         root->right = insertionInBST(root->right, val);
//     }

//     // Return updated tree
//     return root;
// }
