// /*
//     Following is Binary Tree Node structure:
//     class TreeNode
//     {
//     public:
//         int data;
//         TreeNode *left, *right;
//         TreeNode() : data(0), left(NULL), right(NULL) {}
//         TreeNode(int x) : data(x), left(NULL), right(NULL) {}
//         TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
//     };
// */

// vector <int> v;

// void postorder(TreeNode *root){
//     if(root == NULL){
//         return;
//     }
//     postorder(root -> left);
//     postorder(root -> right);
//     v.push_back(root->data);
// }

// vector<int> postorderTraversal(TreeNode *root)
// {   
//     //Notun value ashle clear
//     v.clear();
//     postorder(root);
//     return v; 
//     // Write your code here.
// }