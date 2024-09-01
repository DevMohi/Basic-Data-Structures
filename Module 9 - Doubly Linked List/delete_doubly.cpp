//Insertion method for doubly linked list - head,tail,any position 
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
        this->prev = NULL; 
    }
};
// o(N) 
void deleteAtPos(Node * head, int pos){
    Node * tmp = head;
    for(int i=1; i<=pos-1; i++){
        tmp = tmp ->next;
    }
    Node * deleteNode = tmp->next; // aikane value 30 ekn store korsi
    tmp -> next = tmp -> next ->next; // aikane 40 ste connect hoie gexe
    tmp -> next -> prev = tmp; 
    delete deleteNode;
}
// o(1) 
void deleteTail(Node *&head, Node *&tail){
    Node *deleteNode = tail;
    tail = tail->prev;
    delete deleteNode;
    if(tail == NULL){
        head = NULL;
        return;
    }
    tail -> next = NULL;
}

// o(1) 
void deleteHead(Node *&head , Node *&tail){
    
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
    if(head == NULL){
        tail = NULL;
        return;
    }
    head->prev = NULL;
}

// O(N) 
void printNormal(Node *head){
    Node *tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout<<endl;
}

// O(N)
void printReverse(Node *tail){
    Node *tmp = tail;
    while(tmp !=NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->prev;
    }
    cout<<endl;
}


// o(N) 
int size(Node * head){
    int count = 0;
    Node  * tmp = head;
    while(tmp!=NULL){
        count++;
        tmp = tmp->next;
    }
    return count;
}


int main(){
    //For checking if the values are null 
    // Node *head = NULL;
    // Node * tail = NULL;


    Node * head = new Node(10);
    Node * a = new Node(20);
    Node * b = new Node(30);
    Node * c = new Node(40);

    Node * tail = c;

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    
    int pos;
    cin>>pos;

    if(pos >= size(head)){
        cout<<"Invalid"<<endl;
    }
    else if(pos == 0){
        deleteHead(head,tail);
    }
    else if(pos == size(head) - 1){
        deleteTail(head, tail);
    }
    else{
        deleteAtPos(head,pos);
    }

    printNormal(head); 
    printReverse(tail);

    return 0;
}