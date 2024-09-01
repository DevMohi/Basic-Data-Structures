// // Important leetcode questions , here stack is used

// class Solution {
// public:
//     bool isValid(string s) {
//         stack <char> st;
//         for(char c:s){
//             if(c== '(' || c == '{' || c== '['){
//                 st.push(c);
//             }
//             else{
//                 //empty hoile top access kora jaina   
//                 if(st.empty()){
//                     return false;
//                 }
//                 else{
//                     if(c == ')' && st.top() == '('){
//                         st.pop();
//                     }
//                     else if(c == ']' && st.top() == '['){
//                         st.pop();
//                     }
//                     else if(c == '}' && st.top() == '{'){
//                         st.pop();
//                     }
//                     else{
//                         return false; 
//                     }
//                 }
//             }
//         }
//         if(st.empty()) return true;
//         else return false; 
//     }
// };