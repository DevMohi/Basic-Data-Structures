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
        this->prev = NULL;
    }
};

void insertTail(Node * &head, Node* &tail,int v){
    Node * newNode = new Node(v); 
    if(tail == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail ->next = newNode; 
    newNode->prev = tail; 
    tail = tail->next;
}

void printList(Node * head){
    Node *tmp = head;
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
}

int getSize(Node *head){
    int count = 0;
    Node *tmp = head;
    while(tmp != NULL){
        count++;
        tmp = tmp->next;
    }
    return count;
}

int main(){
    Node * head = NULL;
    Node * head2 = NULL;
    Node * tail = NULL;
    Node * tail2 = NULL;
    int v;
    while(true){
        cin>>v;
        if(v == -1){
            break;
        }
        insertTail(head,tail,v);
    };

    int v2;
    while(true){
        cin>>v2;
        if(v2 == -1){
            break;
        }
        insertTail(head2,tail2,v2);
    }

    if(getSize(head) == getSize(head2)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}