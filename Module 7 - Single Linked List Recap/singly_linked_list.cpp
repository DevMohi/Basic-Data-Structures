#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node *next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

void printList(Node *head){
    Node *tmp = head;
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
}

int main(){
    Node *head = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);


    head->next = b;
    b->next = c;

    printList(head);


    // cout<<(*head).val<<" "; // One way
    // cout<<head->val<<" "; // Second way 

    // cout<<head->next->val; 

    // Node a,b;
    // a.val = 10;
    // b.val = 10;
    // a.next = &b; 
    return 0;
}