// #include <bits/stdc++.h> 
// /************************************************************

//     Following is the TreeNode class structure

//     template <typename T>
//     class TreeNode {
//        public:
//         T data;
//         TreeNode<T> *left;
//         TreeNode<T> *right;

//         TreeNode(T data) {
//             this->data = data;
//             left = NULL;
//             right = NULL;
//         }
//     };

// ************************************************************/
// //will display only the left node , mane protita level er first node in order 
// vector<int> getLeftView(TreeNode<int> *root)
// {

//     bool frq[3010] = {false}; 
//     queue<pair<TreeNode<int> * , int>> q;
//     if(root) q.push({root,1});
//     vector<int> v;

//     while(!q.empty()){
//         pair<TreeNode<int> * , int > parent = q.front();
//         q.pop();
//         TreeNode<int> * node = parent.first;
//         int level = parent.second; 

//         //Oi level e ekbar ei aste parbe and value nite parbe 
//         if(frq[level] == false){
//             v.push_back(node -> data);
//             frq[level] = true; 
//         }

//         if(node -> left){
//             q.push({node-> left,level + 1});
//         }
//         if(node -> right){
//             q.push({node-> right,level + 1});
//         }

//     }

//     return v;

// }