// class Solution {
// public:
//     ListNode* removeElements(ListNode* head, int val) {
//         if (head == NULL) return head;

//         while (head != NULL && head->val == val) {
//             ListNode* temp = head;
//             head = head->next;
//             delete temp;
//         }

//         ListNode* tmp = head;
//         while (tmp != NULL && tmp->next != NULL) {
//             if (tmp->next->val == val) {
//                 ListNode* temp = tmp->next;
//                 tmp->next = tmp->next->next;
//                 delete temp;
//             } else {
//                 tmp = tmp->next;
//             }
//         }

//         return head;
//     }
// };