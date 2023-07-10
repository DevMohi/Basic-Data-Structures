// class Solution {
//     void insertAtTail(ListNode *&head, ListNode *&tail, int val) {
//         ListNode* newNode = new ListNode(val);
//         if (head == NULL) {
//             head = newNode;
//             tail = newNode;
//             return;
//         }
//         tail->next = newNode;
//         tail = tail->next;
//     }

//     // void printList(ListNode *head) {
//     //     while (head != NULL) {
//     //         cout << head->val << " ";
//     //         head = head->next;
//     //     }
//     // }

// public:
//     ListNode* mergeNodes(ListNode* head) {
//         ListNode* tmp = head;
//         ListNode* newHead = NULL;
//         ListNode* newTail = NULL;

//         int sum = 0;
//         while (tmp != NULL) {
//             sum = sum + tmp->val;
//             tmp = tmp->next;
//             if (tmp == NULL) {
//                 break;
//             }
//             if (tmp->val == 0) {
//                 insertAtTail(newHead, newTail, sum);
//                 sum = 0;
//             }
//         }

//         // printList(newHead);

//         return newHead;
//     }
// };