// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:

//     void reverse(ListNode *&head, ListNode *cur){
//         if(cur ->next == NULL){
//             head = cur;
//             return;
//         }
//         reverse(head, cur->next);
//         cur->next ->next = cur;
//         cur->next = NULL; 

//     }

//     void insertTail(ListNode *&head, ListNode *&tail, int val){
//         ListNode * newNode = new ListNode(val);
//         if(head == NULL){
//             head = newNode;
//             tail = newNode;
//             return;
//         }
//         tail ->next =newNode;
//         tail = tail->next;
//     }

//     bool isPalindrome(ListNode* head) {
//         ListNode *newHead = NULL;
//         ListNode *newTail = NULL;
//         ListNode * tmp = head; 
//         while(tmp != NULL){
//             insertTail(newHead, newTail,tmp->val);
//             tmp = tmp->next; 
//         }
//         reverse(newHead, newHead);
//         tmp = head; //Null e chole gese tai abar head e nie gese. 
//         ListNode * tmp2 = newHead;
//         while(tmp != NULL){
//             if(tmp -> val != tmp2 -> val){
//                 return false;
//             }
//             tmp = tmp->next; 
//             tmp2 = tmp2 ->next; 
//         }
//         return true;
//     }
// };