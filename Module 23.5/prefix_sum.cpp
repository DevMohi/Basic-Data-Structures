// class Solution {
// public:
  
   
//     vector<int> leftRightDifference(vector<int>& nums) {
//             int leftSum = 0;
//             vector<int> ans;
            
//             for(int x: nums){
//                 leftSum +=x;
//             }

//             int rightSum = 0;
//             for(int x: nums){
//                 leftSum = leftSum - x;
//                 cout<<x<<" "<<leftSum<<endl;
//                 ans.push_back(abs(leftSum - rightSum)); //push back the values 
//                 rightSum = rightSum + x;
//             }
//             return ans;
//     }
// };