#include<bits/stdc++.h>
using namespace std;

class Node{
    public: 
        int val;
        Node* next;

    Node(int val){
        this-> val = val;
        this->next = NULL;

    }
};

void insertHead(Node *&head, Node*&tail, int val){
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

void insertTail(Node *&head , Node* &tail , int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail-> next = newNode; 
    tail = newNode;   
}


void printList(Node* head, Node* tail) {
    cout << head->val << " " << tail->val << endl;
}


int main(){
    Node *head = NULL;
    Node *tail = NULL;

    int x, val;
    int test;
    cin>>test;

    while(test--){
        cin>>x>>val;

        if(x == 0){
            insertHead(head,tail,val);
        }
        else if(x == 1){
            insertTail(head,tail,val);
        }
        printList(head,tail);
    }

    return 0;
}