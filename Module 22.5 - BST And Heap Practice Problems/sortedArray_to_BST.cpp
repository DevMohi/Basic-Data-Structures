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
// TreeNode * convert(vector<int> & nums, int l, int r){
//         if(l>r){
//             return NULL;
//         }
//         int mid = (l+r)/2;
//         TreeNode * root = new TreeNode (nums[mid]);
//         TreeNode * leftroot = convert(nums, l,mid-1);
//         TreeNode * rightroot = convert(nums, mid + 1, r);

//         //connection
//         root -> left = leftroot;
//         root -> right= rightroot; 
//         return root; 
// }


// class Solution {
// public:
//     TreeNode* sortedArrayToBST(vector<int>& nums) {
//         int size = nums.size()-1;
//         return convert(nums, 0, size);
//     }
// };