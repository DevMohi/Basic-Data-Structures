//One way 
//Leet code solution 
// class Solution {
// public:
//     int size(ListNode *head){
//         ListNode * tmp = head;
//         int cnt = 0;
//         while(tmp != NULL){
//             cnt++;
//             tmp = tmp->next;
//         }
//         return cnt; 
//     }
//     ListNode* middleNode(ListNode* head) {
//         int sz = size(head);
//         ListNode *tmp = head; 
//         int mid = sz/2;
//         for(int i=1; i<=mid; i++){
//             tmp = tmp->next;
//         }
//         return tmp; 
//     }
// };

//Another technique - hare and tortoise 

// class Solution {
// public:
//     //Hare and tortoise
//     ListNode* middleNode(ListNode* head) {
//         ListNode * slow = head;
//         ListNode * fast = head;

//         while(fast !=NULL && fast->next !=NULL){
//             slow = slow->next;
//             fast = fast->next->next;
//         }
//         // cout<<slow->val<<endl; 
//         return slow; 
//     }
// };