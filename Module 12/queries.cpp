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

void insertAtAnyPos(Node *&head, Node *&tail ,int v,int pos){
    Node * newNode = new Node(v);
    Node * tmp = head; 
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    for(int i=1; i<pos;i++){
        tmp = tmp ->next; 
    }

    newNode->next = tmp->next;
    newNode -> prev = tmp; 

    tmp ->next -> prev = newNode; 
    tmp ->next = newNode;
}

void insertHead(Node *&head, Node *&tail, int v){
    Node * newNode = new Node(v);
    
    if(head == NULL){
        tail = newNode;
        head = newNode;
        return; 
    }
    
    newNode -> next = head;
    head -> prev = newNode;
    head = newNode; 
}

void print(Node * head){
    Node *tmp = head;
    while(tmp != NULL){
        cout<<tmp -> val <<" ";
        tmp = tmp->next;
    }
}
void reverseList(Node *head){
    if(head == NULL){
        return;
    }
    reverseList(head->next);
    cout<<head->val<<" ";
}

int size(Node *head){
    int count = 0;
    Node *tmp = head;
    while(tmp != NULL){
        count++;
        tmp = tmp->next;
    }
    return count;
}

int main(){
    Node * head =NULL;
    Node * tail = NULL; 

    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int x,v;
        cin>>x>>v;
 
        if(x>size(head)){
            cout<<"Invalid"<<endl;
            continue;
        }
        else if(x == 0){
            insertHead(head,tail,v);
        }
        else if(x ==  size(head)){
            insertAtTail(head,tail,v);
        }
        else{
            insertAtAnyPos(head,tail,v,x);
        }
        cout << "L -> ";
        print(head);
        cout<<endl;
        cout << "R -> ";
        reverseList(head);
        cout<<endl;     
    }
    return 0;
}