// class Solution {
// public:
//     bool backspaceCompare(string s, string t) {
//         stack <char> s1 , s2;

//         for(char c:s){
//             if(c == '#'){
//                 if(!s1.empty()){
//                     s1.pop();
//                 }
//                 else{
//                     s1.push(c); //# er baade jeikono character push 
//                 }
//             }
//         }
//         for(char c:t){
//             if(c == '#'){
//                 if(!s2.empty()){
//                     s2.pop();
//                 }
//                 else{
//                     s2.push(c); //# er baade jeikono character push 
//                 }
//             }
//         }

//         if(s1 == s2) return true;
//         else return false; 


//     }
// };