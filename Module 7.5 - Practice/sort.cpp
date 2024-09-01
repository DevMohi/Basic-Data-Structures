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


void printList(Node *head){
    Node *tmp = head;
    while(tmp !=NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
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
  

    for(Node *i = head; i->next != NULL; i = i->next){
        for(Node *j = i->next; j!=NULL;  j=j->next){
            if(i-> val < j-> val){
                swap(i-> val, j-> val);
            }
        }
    }

    printList(head);
    return 0;
}