// #include <bits/stdc++.h> 

// int getSum(stack<int> s){
//     int sum = 0; 
//     while(!s.empty()){
//         sum += s.top();
//         s.pop(); 
//     }
//     return sum; 
// }

// int maxSum(stack<int> &s1, stack<int> &s2, stack<int> &s3) {
//     int sum1 = getSum(s1);
//     int sum2 = getSum(s2);
//     int sum3 = getSum(s3); 

//     while(true){
//         if(sum1== sum2 && sum2 == sum3) break;
//         if(sum1>=sum2 && sum1 >= sum3){
//             //age value minus korba then pop 
//             sum1 = sum1 - s1.top(); 
//             s1.pop(); 
//         }
//         else if(sum2>=sum1 && sum2 >= sum3){
//             //age value minus korba then pop 
//             sum2 = sum2 - s2.top(); 
//             s2.pop(); 
//         }        
//         else if(sum3>=sum1 && sum3 >= sum2){
//             //age value minus korba then pop 
//             sum3 = sum3 - s3.top(); 
//             s3.pop(); 
//         }
//     }
//     return sum1;
// }