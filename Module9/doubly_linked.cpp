#include<bits/stdc++.h>
using namespace std;

class Node{
    public: 
        int val;
        Node* next;
        //For doubly 3 values
        Node* prev;

    Node(int val){
        this-> val = val;
        this->next = NULL;
        //doubly
        this->prev = NULL;

    }
};

void printLinear(Node *head){
    Node *tmp = head;
    while(tmp!= NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}

void printReverse (Node *tail){
    Node *tmp = tail;
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->prev;
    }
    // cout<<endl; 
}

int main(){
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    //tail track raksi jeno ulta dike print korte pari as doubly linked list dui dike jete pare.
    Node *tail = b; 

    //connection
    head -> next = a;
    a->prev = head; 
    a->next = b;
    b-> prev = a;

    printLinear(head);
    printReverse(tail);
    return 0;
}