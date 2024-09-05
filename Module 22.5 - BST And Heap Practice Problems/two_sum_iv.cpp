// class Solution {
// public:
//     void inorder(TreeNode* root, vector<int>& elements) {
//         if (root==NULL) return;
//         inorder(root->left, elements);
//         elements.push_back(root->val);
//         inorder(root->right, elements);
//     }

//     bool findTarget(TreeNode* root, int k) {
//         vector<int> elements;
//         inorder(root, elements);
        
//         int left = 0;
//         int right = elements.size() - 1;
//         while(left < right) {
//             int sum = elements[left] + elements[right];
//             if(sum == k) return true;
//             if(sum < k) left++;
//             else right--;
//         }
//         return false;
//     }
// };