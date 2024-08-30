// #include <bits/stdc++.h> 
// /************************************************************

//     Following is the TreeNode class structure

//     template <typename T>
//     class TreeNode {
//        public:
//         T val;
//         bool isOriginal;
//         TreeNode<T> *left;
//         TreeNode<T> *right;
        
//         TreeNode(T val) {
//             this->val = val;
//             left = NULL;
//             right = NULL;
//         }
//     };

// ************************************************************/

// int nodeLevel(TreeNode<int>* root, int searchedValue)
// {
//     // Write your code here.

//     //Pair akbo 
//     queue <pair<TreeNode <int> * , int> > q;

//     // q.push(make_pair(root,1)); //One way and another way is coded below 
//     q.push({root, 1});
//     while(!q.empty()){
//         pair<TreeNode <int> * , int> parent = q.front(); 
//         TreeNode <int>* node = parent.first; //first value which is node pair ke access kortesi 
//         int level = parent.second;
//         q.pop();

//         if(node -> val == searchedValue){
//             return level; 
//         }

//         if(node -> left != NULL){
//             q.push({node->left, level + 1});
//         }
//         if(node -> right != NULL){
//             q.push({node->right, level + 1});
//         }
//     }
// }
