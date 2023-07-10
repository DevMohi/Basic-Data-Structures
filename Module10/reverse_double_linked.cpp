//Done with two pointer

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


//Using two pointer 
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

int main(){
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    //tail track raksi jeno ulta dike print korte pari as doubly linked list dui dike jete pare.
    Node *tail = d; 

    //connection
    head -> next = a;
    a->prev = head; 
    a->next = b;
    b-> prev = a;
    b->next = c;
    c->prev = b;
    c->next =d;
    d->prev = c;

    reverse(head,tail);
    printLinear(head);
    return 0;
}