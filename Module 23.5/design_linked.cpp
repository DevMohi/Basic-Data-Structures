// class Node {
// public: 
//     int val;
//     Node* next;

//     Node(int val) {
//         this->val = val;
//         this->next = NULL;
//     }
// };

// class MyLinkedList {
// public:
//     Node *head;
//     Node *tail;
//     int size; 

//     MyLinkedList() {
//         head = NULL;
//         tail = NULL;
//         size = 0;
//     }

//     int get(int index) {
//         if (index < 0 || index >= size) return -1;
//         Node *tmp = head;
//         for (int i = 0; i < index; i++) {
//             tmp = tmp->next;
//         }
//         return tmp->val;
//     }

//     void addAtHead(int val) {
//         Node *newNode = new Node(val);
//         if (head == NULL) {
//             head = newNode;
//             tail = newNode;
//         } else {
//             newNode->next = head;
//             head = newNode;
//         }
//         size++;
//     }

//     void addAtTail(int val) {
//         Node *newNode = new Node(val);
//         if (head == NULL) {
//             head = newNode;
//             tail = newNode;
//         } else {
//             tail->next = newNode;
//             tail = tail->next;
//         }
//         size++;
//     }

//     void addAtIndex(int index, int val) {
//         if (index < 0 || index > size) return;
//         if (index == 0) {
//             addAtHead(val);
//             return;
//         }
//         if (index == size) {
//             addAtTail(val);
//             return;
//         }
//         Node *newNode = new Node(val);
//         Node *tmp = head;
//         for (int i = 0; i < index - 1; i++) {
//             tmp = tmp->next;
//         }
//         newNode->next = tmp->next;
//         tmp->next = newNode;
//         size++;
//     }

//     void deleteAtIndex(int index) {
//         if (index < 0 || index >= size) return;
//         Node *tmp = head;
//         if (index == 0) {
//             head = head->next;
//             delete tmp;
//             if (head == NULL) {
//                 tail = NULL;
//             }
//         } else {
//             for (int i = 0; i < index - 1; i++) {
//                 tmp = tmp->next;
//             }
//             Node *deleteNode = tmp->next;
//             tmp->next = tmp->next->next;
//             if (tmp->next == NULL) {
//                 tail = tmp;
//             }
//             delete deleteNode;
//         }
//         size--;
//     }
// };