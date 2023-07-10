#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    string val;
    Node* next;
    Node* prev;

    Node(string val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};


void checker(Node* &head, Node* tail, string q, string address) {

    Node *tmp = head;

    if (q == "visit") {
        while (head != NULL ) {
            if(head->val == address){
                cout << head->val << endl;
                return;
            }
            head = head->next;       
        }
        cout << "Not Available" << endl;
        head =tmp;    
    }
     else if (q == "prev") {
        if (head->prev == NULL) {
            cout << "Not Available" << endl;
        } else {
            head = head->prev;
            tmp = tmp->prev;
            cout << head->val << endl;
        }
    } else if (q == "next") {
        if (head->next == NULL) {
            cout << "Not Available" << endl;
        } else {
            head = head->next;
            tmp = tmp->next;
            cout << head->val << endl;
        }
    } 

    // return tmp; 
} 


// void prevNext(Node* cur, string q) {

//     Node *tmp = cur;
//     if (tmp == NULL) {
//         cout << "Not Available" << endl;
//         return;
//     }
//     else if (q == "next") {
//         tmp = tmp->next;
//         cout << tmp->val << endl;
//     } else if (q == "prev") {
//         tmp = tmp->prev;
//         cout << tmp->val << endl;
//     }
// }


//  else if (q == "prev") {
//         if (tmp->prev == NULL) {
//             cout << "Not Available" << endl;
//         } else {
//             tmp = tmp->prev;
//             cout << tmp->val << endl;
//         }
//     } else if (q == "next") {
//         if (tmp->next == NULL) {
//             cout << "Not Available" << endl;
//         } else {
//             tmp = tmp->next;
//             cout << tmp->val << endl;
//         }
//     }


void printList(Node* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
}

void insertAtTail(Node *& head,Node *& tail, string val){
    //notun value toiri kortesi
    Node * newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    tail-> next = newNode; // 2A
    newNode -> prev = tail; //1A
    tail = newNode;  //aita ekon 2A tah point kortese

    //Another way
    // tail = tail->next;   
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    string val;
    while (true) {
        cin >> val;
        if (val == "end") {
            break;
        }
        insertAtTail(head, tail, val);
        cin.ignore(); 
    }

    int t;
    cin >> t;

    cin.ignore(); 

    for (int i = 0; i < t; i++) {
        string q;
        getline(cin, q);

        string cmp = "visit";

        if (q.substr(0, 5) == cmp) {
            int index = q.find(" ") + 1;

            // Address pai gesi
            string address = q.substr(index);

            checker(head, tail, q.substr(0, 5), address);
        } else if (q == "prev") {
            checker(head, tail, q, "");

        } else if (q == "next") {
            checker(head, tail, q, "");
        }
    }

    // printList(head);

    return 0;
}