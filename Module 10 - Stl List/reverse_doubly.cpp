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

void print(Node * head){
    Node *tmp = head;
    while(tmp != NULL){
        cout<<tmp -> val << " ";
        tmp = tmp -> next; 
    }
    cout<<endl;
}

//Reverse and two pointer with doubly linked list 
void reverse(Node * head, Node *tail){
    Node * i = head;
    Node * j = tail;

    while(i!=j && i-> next != j){
        swap(i->val,j->val); 
        i = i->next;
        j = j->prev;
    }
    swap(i->val, j-> val); //aita jor shonkar jnno kore hoise fix 
}

int main(){
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node * tail = b;

    head->next = a;
    a-> prev = head;
    a->next = b;
    b-> prev = a;
    
    reverse(head,tail);
    print(head);

    return 0;
}