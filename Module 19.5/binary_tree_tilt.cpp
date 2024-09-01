// int tilt(TreeNode * root , int &totalTilt){
//     if(root == NULL){
//         return 0;
//     }


//     int l = tilt(root -> left, totalTilt);
//     int r = tilt(root -> right, totalTilt);
//     int diff = abs(l - r);

//     totalTilt += diff; 

//     return root -> val + l + r;
// }

// class Solution {
// public:
//     int findTilt(TreeNode* root) {
//         int totalTilt = 0;
//         tilt(root , totalTilt);
//         return totalTilt;
//     }
// };