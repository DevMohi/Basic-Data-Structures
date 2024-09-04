// void reverseStack(stack<int> &s) {
//     // Write your code here
//     if(s.empty()) return; 
//     int x = s.top();
//     s.pop();
//     reverseStack(s);
//     stack <int> cp;
//     while(!s.empty()){
//         cp.push(s.top());
//         s.pop();
//     }
//     cp.push(x);
//     while(!cp.empty()){
//         s.push(cp.top());
//         cp.pop();
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int s;
//     reverseStack(s); 
//     return 0;
// }