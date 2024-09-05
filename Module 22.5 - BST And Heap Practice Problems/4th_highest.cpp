// /*
//     Time Complexity : O(N)
//     Space Complexity : O(1)
    
//     Where N is the size of the array  , 
// */

// #include <queue>
// #include <climits>

// int getFourthLargest(int arr[], int n)
// {

//     if (n < 4)
//     {
//         return INT_MIN;
//     }

//     // Min Priority queue to maintain 4 largest elements in it
//     priority_queue<int, vector<int>, greater<int>> pq; 

//     for (int i = 0; i < n; i++)
//     {
//         pq.push(arr[i]);
        
//         if (pq.size() > 4)
//         {
//             pq.pop();
//         }
//     }

//     // On top it will have the 4th largest element
//     return pq.top(); 
// }