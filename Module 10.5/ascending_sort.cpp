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


void ascSort(Node *head, Node *tail){
    Node * i = head;
    Node * j = tail;

    for(i; i->next != NULL; i=i->next){
        for(j = i->next ; j!= NULL; j= j->next){
            if(i->val > j-> val){
                swap(i->val, j->val);
            }
        }
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
    ascSort(head,tail);
    printList(head); 

    
    return 0;
}