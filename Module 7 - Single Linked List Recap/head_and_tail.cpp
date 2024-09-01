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


//Jodi direct head ke update koro tahole & use kora lage 
// Complexity - O(1) 
void insertHead(Node *&head, int val){
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;

}

//Better method of tracking tail , aikaneo reference newa lagbe
// O(1) 
void insertTail(Node *&head, Node *&tail, int val){
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}


int main(){
    Node *head = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);

    Node *tail = e;


    head->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    printList(head);  
    cout<<endl;
    cout<<"Tail "<<tail->val<<endl; 

    int pos,val;
    cin>>pos>>val;
    

    if(pos > size(head)){
        cout<<"Invalid index"<<endl;
    }
    else if(pos ==0){
        insertHead(head,val);
    }
    else if(pos == size(head)){
        insertTail(head,tail,val);
    }
    else{
        insert(head,pos,val);
    }

    printList(head); 
    cout<<endl;
    cout<<"Tail"<<tail->val<<endl; 



    // cout<<(*head).val<<" "; // One way
    // cout<<head->val<<" "; // Second way 

    // cout<<head->next->val; 

    // Node a,b;
    // a.val = 10;
    // b.val = 10;
    // a.next = &b; 
    return 0;
}