#include <iostream>
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

void checker(Node* head, Node* tail, string q, string address) {
    Node* tmp = head;

    if (q == "visit") {
        while (tmp != NULL) {
            if (tmp->val == address) {
                cout << tmp->val << endl;
                return;
            }
            tmp = tmp->next;
        }
        cout << "Not Available" << endl;
        tmp = head;
    } else if (q == "prev") {
        if (tmp->prev == NULL) {
            cout << "Not Available" << endl;
        } else {
            tmp = tmp->prev;
            cout << tmp->val << endl;
            tmp = head;
        }
    } else if (q == "next") {
        if (tmp->next == NULL) {
            cout << "Not Available" << endl;
        } else {
            tmp = tmp->next;
            cout << tmp->val << endl;
            tmp = head;
        }
    }
}

void printList(Node* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
}

void insertAtTail(Node*& head, Node*& tail, string val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
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
            int index = q.find(" ");
            string address = q.substr(index + 1);
            checker(head, tail, q.substr(0, 5), address);
        } else {
            checker(head, tail, q, "");
        }
    }

    printList(head);

    return 0;
}
