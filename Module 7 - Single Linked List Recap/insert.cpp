#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node *next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

//O(N)

void printList(Node *head){
    Node *tmp = head;
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
}
//O(N)
int size(Node *head){
    Node *tmp = head;
    int count = 0;
    while(tmp !=NULL){
        count++;
        tmp = tmp->next;
    }
    return count;
}

//Insert er complexity - O(N)
void insert(Node *head,int pos,int val){
    Node *newNode = new Node(val);
    Node *tmp =head;
    for(int i=1; i<=pos-1; i++){
        tmp = tmp->next;
    }
    // cout<<tmp->val<<endl; 
    newNode->next = tmp->next;
    tmp ->next = newNode;
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

    int pos,val;
    cin>>pos>>val;
    
    if(pos > size(head)){
        cout<<"Invalid index"<<endl;
    }
    else{
        insert(head,pos,val);
    }

    printList(head); 


    // cout<<(*head).val<<" "; // One way
    // cout<<head->val<<" "; // Second way 

    // cout<<head->next->val; 

    // Node a,b;
    // a.val = 10;
    // b.val = 10;
    // a.next = &b; 
    return 0;
}