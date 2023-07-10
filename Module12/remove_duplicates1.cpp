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

void insertAtTail(Node *&head, Node*& tail, int val){
    Node * newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = tail->next;
}

void printList(Node *head){
    while(head !=NULL){
        cout<<head->val<<" ";
        head = head->next;
    }
}


int main(){
    Node *head = NULL;
    Node *tail = NULL;

    int val;

    while(true){
        cin>>val;
        if(val == -1){
            break;
        }
        insertAtTail(head,tail,val);
    }

    // o(n)*2 
    for(Node *i = head; i->next!=NULL; i = i->next){
        for(Node *j = i->next; j!=NULL; j = j->next){
            if(i->val > j->val){
                swap(i->val, j->val);
            }
        }
    }

    Node *tmp = head;
    while(tmp->next != NULL){
        if(tmp->val == tmp->next->val){
            tmp->next = tmp->next->next;
        }
        if(tmp->next == NULL) break;
        else if(tmp ->val != tmp->next->val){
            tmp = tmp->next;
        }
    }
    
    printList(head);
    return 0;
}