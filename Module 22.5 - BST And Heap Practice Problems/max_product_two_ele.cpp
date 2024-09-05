// class Solution {
// public:
//     int maxProduct(vector<int>& nums) {
//         int max = INT_MIN;
//         int max2 = INT_MIN;
//         int i = 0;
        
//         while(i < nums.size()){
//             if(nums[i] > max){
//                 max2 = max;
//                 max = nums[i];     
//             }
//             else if(nums[i] > max2){
//                 max2 = nums[i]; 
//             }
//             i++;
//         }

//         return (max - 1) * (max2 -1); 
//     }
// };

