// class Solution {
// public:

//     int size(ListNode *head){
//         int cnt = 0;
//         while(head!=NULL){
//             cnt++;
//             head= head->next;
//         }
//         return cnt;
//     }

//     ListNode* swapNodes(ListNode* head, int k) {
//         ListNode *t1 = head;
//         ListNode *t2 = head;

//         int sz= size(head);

//         int newSize = sz-k;

//         for(int i=1; i<=newSize; i++){
//             t1 = t1->next;
//         }

//         for(int i=1; i<k;i++){
//             t2 = t2->next;
//         }

//         swap(t1->val , t2->val);

//         cout<<t1->val<<" ";
//         cout<<t2->val<<" ";

//         return head;
//     }
// };