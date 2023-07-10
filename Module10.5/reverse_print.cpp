//Question 5 : Take a doubly linked list as input and sort it in ascending order. Then print the list.

#include<bits/stdc++.h>
using namespace std;

class Node{
    public: 
        int val;
        Node* next;
        Node *prev;

    Node(int val){
        this-> val = val;
        this->next = NULL;
        this ->prev = NULL;
    }
};

void insertAtTail(Node *&head, Node *&tail , int val){
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail-> next = newNode; 
    newNode -> prev = tail; 
    tail = newNode;
}


void reverse (Node *head , Node *tail){
    Node *i = head;
    Node *j = tail;

    while(i!=j && i->next !=j){
        swap(i->val, j->val);
        i = i->next;
        j = j->prev;
    }
    swap(i->val, j->val);
}


void printList(Node *head){
    while(head != NULL){
        cout<<head -> val <<" ";
        head = head->next;  
    }
    cout<<endl;
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
    reverse(head,tail);
    printList(head);


    return 0;
}