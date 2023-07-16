// /****************************************************************

//     Following is the class structure of the Node class:

//         class Node
//         {
//         public:
//             int data;
//             Node *next;
//             Node(int data)
//             {
//                 this->data = data;
//                 this->next = NULL;
//             }
//         };

// *****************************************************************/

// class Stack
// {
//     //Write your code here
// public:
//     Node *head = NULL;
//     int sz = 0;

//     Stack()
//     {
//         //Write your code here

//     }

//     int getSize()
//     {
//         return sz;
//     }

//     bool isEmpty()
//     {
//         // if(sz == 0) return true;
//         // else return false;
//         return sz == 0;
//     }

//     void push(int data)
//     {
//         sz++;
//         Node* newNode = new Node(data);
//         if(head==NULL){
//         head = newNode;
//         return;
//         }
//         newNode->next = head;
//         head = newNode;
//     }

//     void pop()
//     {
//         if (head == NULL){
//             return;
//         }
//         sz--;
//         Node *dlt = head;
//         if (dlt->next == NULL)
//         {
//             head = NULL;
//             delete dlt;
//             return;
//         }
//         head = dlt->next;
//         delete dlt;
//     }

//     int getTop() { return isEmpty() ? -1 : head->data; 
//     }
// };