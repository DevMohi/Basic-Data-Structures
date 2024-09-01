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

int size(Node *head){
    Node *tmp = head;
    int count = 0;
    while(tmp !=NULL){
        count++;
        tmp = tmp->next;
    }
    return count;
}



// Complexity - O(N) 
void deleteNode(Node *head,int pos){
    Node *tmp= head;
    for(int i=1; i<=pos-1; i++){
        tmp = tmp->next;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}

//Complexity - 0(1)
void deleteHead(Node *&head){
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}

void printList(Node *head){
    Node *tmp = head;
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
}

int main(){
    Node *head = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);

    
    head->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    printList(head);
    cout<<endl;  

    int pos;
    cin>>pos;

    if(pos>=size(head)){
        cout<<"Invalid"<<endl;
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