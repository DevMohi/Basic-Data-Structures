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

void insertTail(Node *&head, Node *&tail, int v){
    Node *newNode = new Node(v);

    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail ->next = newNode;
    tail = newNode;

}

void reverseList(Node *i){
    if(i == NULL){
        return;
    }
    reverseList(i->next);
    cout<<i->val<<" ";

}


int main(){
    Node *head = NULL;
    Node *tail = NULL;


    int v;

    while(true){
        cin>>v;
        if(v == -1){
            break;
        }
        insertTail(head,tail,v);
    }    
    reverseList(head);
    // printList(head);
    // cout<<endl;  



    return 0;
}