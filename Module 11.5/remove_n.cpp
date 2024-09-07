// class Solution {
// public:
//     int size(ListNode * head){
//         ListNode *tmp = head;
//         int cnt = 0;
//         while(tmp!=NULL){
//             cnt++;
//             tmp = tmp->next;
//         }
//         return cnt;
//     }

//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         if(head == NULL) return head;

//         int newSize = size(head) - n;

//         ListNode * tmp = head;
//         for(int i=1; i<newSize; i++){
//             tmp = tmp->next;
//         }
//         if(newSize == 0){ 
//             head = head->next;
//         }

//         else if(tmp->next!=NULL){
//             tmp->next = tmp->next->next;
//         }

//         return head;
//     }
// };