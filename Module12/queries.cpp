#include<bits/stdc++.h>
using namespace std;

class Node{
    public: 
        int val;
        Node* next;
        Node* prev;

    Node(int val){
        this-> val = val;
        this->next = NULL;
        this-> prev = NULL;
    }
};


void insertAtTail(Node *&head, Node *&tail, int val){
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    Node *tmp = head;
    tail->next = newNode;
    newNode->prev = tmp;
    tail = tail->next;
}


void insertAtHead(Node *&head, Node* &tail, int val){
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    newNode -> next = head;
    head-> prev = newNode;
    head = newNode;
}


void insertAtAnyPos(Node *&head, Node *&tail, int pos, int val){

    Node * newNode = new Node(val);
    Node *tmp = head;
    for(int i=1; i<pos; i++){
        tmp = tmp->next;
    }
    newNode -> next = tmp->next;
    newNode-> prev = tmp;

    tmp->next->prev = newNode;
    tmp->next = newNode; 
}


int size(Node *head){
    int count = 0;
    while(head != NULL){
        count++;
        head = head->next;
    }
    return count;
}

void printList(Node *head){
    while(head!= NULL){
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl;
}

void reverseList(Node *head){
    if(head == NULL){
        return;
    }
    reverseList(head->next);
    cout<<head->val<<" ";
}

int main(){
    Node *head = NULL;
    Node *tail = NULL;

    // int val;
    // while(true){
    //     cin>>val;
    //     if(val == -1){
    //         break;
    //     }
    //     insertAtTail(head,tail,val);
    // }


    //X is index here

    int test;
    cin>>test;

    while(test--){
        int x,v;
        cin>>x>>v;

        if(x>size(head)){
            cout<<"Invalid"<<endl;
            continue;
        }
        else if(x == 0){
            insertAtHead(head,tail,v);
        }
        else if(x == size(head)){
            insertAtTail(head,tail,v);
        }
        else{
            insertAtAnyPos(head,tail,x,v);
        }

        cout << "L -> ";
        printList(head);
        cout << "R -> ";
        reverseList(head);
        cout<<endl;
    }
    return 0;
}