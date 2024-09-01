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

// O(N) 
void insertAtPos(Node *head, int pos, int v){
    Node * newNode = new Node(v);
    Node * tmp = head;
    for(int i=1; i<=pos-1; i++){
        tmp = tmp->next; 
    }
    newNode ->next = tmp ->next; 
    tmp ->next = newNode;
    newNode ->next -> prev = newNode;
    newNode -> prev = tmp;
}

// O(1) 
void insertHead(Node *&head,Node *&tail ,int v){
    Node *newNode = new Node(v);
    //Head jodi null thake ai case ta tik rakbe 
    if(head == NULL){
        head = newNode; 
        tail = newNode;
        return; 
    }
    newNode -> next = head;
    head -> prev = newNode;
    head = newNode; 
}

// O(1) 
void insertTail(Node *&head, Node *&tail , int v){
    Node *newNode = new Node(v);
    if(tail == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail ->next = newNode;
    newNode -> prev = tail;
    tail = tail->next; 
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
    
    int pos,val;
    cin>>pos>>val;

    if(pos>size(head)){
        cout<<"Invalid"<<endl;
    }
    else if(pos == 0){
        insertHead(head,tail,val);
    }
    else if(pos == size(head)){
        insertTail(head,tail,val);
    }
    else{
        insertAtPos(head,pos,val);  
    }

    printNormal(head); 
    printReverse(tail);

    return 0;
}