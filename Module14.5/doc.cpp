// //Problem 1
// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int val;
//     Node* next;
//     Node* prev;
//     Node(int val) {
//         this->val = val;
//         this->next = NULL;
//         this->prev = NULL;
//     }
// };

// class myStack {
// public:
//     Node* head = NULL;
//     Node* tail = NULL;

//     int sz = 0;

//     void push(int val) {
//         sz++;
//         Node* newNode = new Node(val);
//         if (head == NULL) {
//             head = newNode;
//             tail = newNode;
//             return;
//         }
//         newNode->prev = tail;
//         tail->next = newNode;
//         tail = tail->next;
//     }

//     void pop() {
//         sz--;
//         Node* deleteNode = tail;
//         tail = tail->prev;

//         if (tail == NULL) {
//             head = NULL;
//         }
//         else {
//             tail->next = NULL;
//         }
//         delete deleteNode;
//     }

//     int top() {
//         return tail->val;
//     }

//     int size() {
//         return sz;
//     }

//     bool empty(){
//         if(sz == 0) return true;
//         else return false;
//     }
// };

// int main() {
//     myStack st;
//     myStack st2;
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++) {
//         int x;
//         cin >> x;
//         st.push(x);
//     }

//     int m;
//     cin >> m;  // Use 'm' instead of 'z' for the size of the second stack
//     for (int i = 0; i < m; i++) {  // Loop should use 'm' instead of 'n'
//         int x;
//         cin >> x;
//         st2.push(x);
//     }

//     bool flag = true;

//     if (n != m) {
//         flag = false;
//     }

//     while (!st.empty()) {
//         if (st.top() != st2.top()) {
//             flag = false;
//             break;  // Exit the loop early if a difference is found
//         }
//         st.pop();
//         st2.pop();
//     }

//     if (flag) {
//         cout << "YES" << endl;
//     }
//     else {
//         cout << "NO" << endl;
//     }
//     return 0;
// }


//Problem 2

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     stack<int> a;
//     queue<int> b;

//     int n;
//     cin>>n;
//     for(int i=0; i<n;i++){
//         int x;
//         cin>>x;
//         a.push(x);
//     }

//     int m;
//     cin>>m;
//     for(int i=0; i<m; i++){
//         int x;
//         cin>>x;
//         b.push(x);
//     }
    
//     bool flag = true;

//     if (n != m) {
//         flag = false;
//     }

//     while(!a.empty()){
//         if(a.top() != b.front()){
//             flag = false;
//         }
//         a.pop();
//         b.pop();
//     }

//     if (flag) {
//         cout << "YES" << endl;
//     }
//     else {
//         cout << "NO" << endl;
//     }


//     return 0;
// }


//Problem 3

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     stack<int> a;
//     stack<int>copy;
    
//     int n;
//     cin>>n;
//     for(int i=0; i<n;i++){
//         int x;
//         cin>>x;
//         a.push(x);
//     }

//     //50 40 30 20 10 
//     while(!a.empty()){
//         int element = a.top();
//         a.pop();
//         copy.push(element);
//     }

//     //Print elements
//     while(!copy.empty()){
//         cout<<copy.top()<<" ";
//         copy.pop();
//     }
//     return 0;
// }


//Problem 4

#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> a;
    stack<int>copy; 
    
    int n;
    cin>>n;
    for(int i=0; i<n;i++){
        int x;
        cin>>x;
        a.push(x);
    }

    //50 40 30 20 10 
    while(!a.empty()){
        // cout<<a.front()<<endl; 
        int element = a.front();
        a.pop();
        copy.push(element); 
    }

    //Print elements
    while(!copy.empty()){
        cout<<copy.top()<<" ";
        copy.pop();
    }
    return 0;
}
