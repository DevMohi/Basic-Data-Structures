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

void print_recustion(Node *n){
    if(n == NULL){
        return;
    }
    print_recustion(n->next);
    cout<< n-> val <<" ";
}

void print(Node * head){
    Node *tmp = head;
    while(tmp != NULL){
        cout<<tmp -> val << " ";
        tmp = tmp -> next; 
    }
    cout<<endl;
}

void reverse(Node *&head , Node * cur){
    if(cur->next == NULL){
        head = cur;
        return;
    }
    reverse(head,cur->next);
    cur->next->next =cur;
    cur->next = NULL;
}

int main(){
    Node * head = new Node(10);
    Node * a=  new Node(20);
    Node  *b  = new Node (30);

    head->next = a;
    a->next =b;

    // print_recustion(head); 
    reverse(head,head);
    print(head);

    return 0;
}