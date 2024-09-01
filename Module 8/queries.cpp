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

void insertHead(Node *&head, Node*&tail, int v){
    Node *newNode = new Node(v);

    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode; 
}

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


    
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int pos,v;
        cin>>pos>>v;

        if(pos == 0){
            insertHead(head,tail,v);
        }
        else if(pos==1){
            insertTail(head,tail,v);
        }

        cout<<head->val<<" "<<tail->val<<endl;
    }

    
    return 0;
}