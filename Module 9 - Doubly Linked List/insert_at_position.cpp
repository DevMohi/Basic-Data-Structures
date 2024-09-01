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

void printNormal(Node *head){
    Node *tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout<<endl;
}

void printReverse(Node *tail){
    Node *tmp = tail;
    while(tmp !=NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->prev;
    }
    cout<<endl;
}

void insertAtPos(Node *head, int pos, int v){
    Node * newNode = new Node(v);
    Node * tmp = head;
    for(int i=1; i<=pos-1; i++){
        tmp = tmp->next; 
    }
    // cout<<tmp->val<<" "; //aikane 20 porjonto gese 
    newNode ->next = tmp ->next; // value dhoro aikane 30 nie nise 
    tmp ->next = newNode;

    //aikane value ta assinged ase . ekon oitar prev e newNode address
    //assing korteso 
    // tmp -> next->next -> prev = newNode;  
    newNode ->next -> prev = newNode;
    newNode -> prev = tmp;
}

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

    if(pos>=size(head)){
        cout<<"Invalid"<<endl;
    }
    else{
        insertAtPos(head,pos,val);  
    }

    printNormal(head); 
    printReverse(tail);


    return 0;
}