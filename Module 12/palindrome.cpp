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

void insertTail(Node *&head, Node *&tail , int v){
    Node * newNode = new Node(v);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail-> next = newNode;
    tail = newNode; // or tail = tail-> next; 
}

void reverse(Node *&head , Node * cur){
    if(cur->next ==NULL){
        head = cur;
        return;
    }
    reverse(head, cur->next);
    cur->next -> next = cur;
    cur->next = NULL; 
}

void printList(Node *head){
    Node *tmp = head;
    while(tmp != NULL){
        cout<<tmp-> val<<" ";
        tmp = tmp->next;
    }
}

int main(){
    Node * head = NULL;
    Node *head2 = NULL;
    Node * tail = NULL; 
    Node * tail2 = NULL;

    int v;
    while(true){
        cin>>v;
        if(v == -1){
            break;
        }
        insertTail(head,tail,v);
    }
    Node * tmp = head;
    //insert 
    while(tmp != NULL){
        insertTail(head2, tail2, tmp->val);
        tmp = tmp->next;
    }
    reverse(head2,head2);

    tmp = head; 

    Node * tmp2 = head2;
    int flag = 1;
    while(tmp != NULL){
        if(tmp -> val != tmp2->val){
            flag = 0;
            break;
        }
        tmp = tmp->next; 
        tmp2 = tmp2->next;
    }
    if(flag == 1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}