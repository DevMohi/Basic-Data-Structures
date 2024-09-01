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


void palindrome(Node *head, Node *tail){
    Node * i = head;
    Node * j = tail;

    int flag = 1;
    while(i != j && i->next != j){
        if(i-> val != j-> val){
            flag = 0;
            break;
        }
        i = i->next;
        j = j->prev; 
    }

    if(flag == 1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}    


void printList(Node * head){
    Node *tmp = head;
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
}


int main(){
    Node * head = NULL;
    Node * tail = NULL;
  
    int v;
    while(true){
        cin>>v;
        if(v == -1){
            break;
        }
        insertTail(head,tail,v);
    }; 
    // printList(head); 
    palindrome(head,tail);

    
    return 0;
}