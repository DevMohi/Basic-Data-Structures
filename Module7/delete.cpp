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

//Complexity = O(n)
void deleteNode (Node *head, int pos){
    Node *tmp = head;
    for(int i=1; i<pos-1; i++){
        tmp = tmp->next;
    }
    Node *deleteNode =tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}

// Complexity = 0(1) 
void deleteHead(Node* &head){
    Node *deleteNode = head; 
    head = head->next;
    delete deleteNode;
}

int size (Node *head){
    Node * temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

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
    printList(head);
    int pos;
    cin>>pos;

    if(pos >=size(head)){
        cout<<"Invalid index";
    }
    else if(pos == 0){
        deleteHead(head);
    }
    else{
        deleteNode(head,pos);
    }
    printList(head);

    return 0;
}