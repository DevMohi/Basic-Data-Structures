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


//O(N)
void insert(Node *head , int pos,int val ){
    Node* newNode = new Node(val);
    Node *tmp = head; 
    for(int i=1; i<=pos-1; i++){
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;

}

// O(N) 
int size (Node *head){
    Node * temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

//Complexity = O(1)
void insertHead(Node* &head, int val){
    Node *newNode =new Node(val);
    newNode->next = head;
    head = newNode; 
}

///Complexity = 0(1)
void insert_tail(Node* &head , Node* &tail , int val){
    Node * newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

//O(N)
void printList(Node *head){
    Node * temp = head;
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}


int main(){
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    
    head -> next = a;
    a -> next = b;
    b-> next = c;
    c -> next = d;
    Node *tail  = d;
    printList(head);
    cout<<"Tail->"<<tail->val<<endl;


    int pos, val;
    cin >> pos >> val;
    if (pos > size(head))
    {
        cout << "Invalid Index" << endl;
    }
    else if (pos == 0)
    {
        insertHead(head, val);
    }
    else if (pos == size(head))
    {
        insert_tail(head, tail, val);
    }
    else
    {
        insert(head, pos, val);
    }

    printList(head);

    return 0;
}