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

void insertTail(Node *&head, Node *&tail, int v){
    Node *newNode = new Node(v);

    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail ->next = newNode;
    tail = newNode;

}

int size(Node *head){
    Node *tmp = head;
    int count = 0;
    while(tmp !=NULL){
        tmp = tmp->next;
        count++;
    }
    return count; 
}


void middle_element(Node * head , int index){
    Node *tmp = head; 
    int mid = (index)/2;
    if(index %2 == 0){
        for(int i=1; i<=mid - 1; i++){
            // cout<<i<<" "; 
            tmp = tmp->next;
        }
        cout<<tmp->val<<" ";
        tmp = tmp->next;
        cout<<tmp->val<<endl;
    }
    else if(index %2 != 0){
        for(int i=1; i<=mid; i++){
            // cout<<i<<" "; 
            tmp = tmp->next;
        }
        cout<<tmp->val<<endl;
    }
}


int main(){
    Node *head = NULL;
    Node *tail = NULL;


    int v;

    while(true){
        cin>>v;
        if(v == -1){
            break;
        }
        insertTail(head,tail,v);
    }    

    for(Node *i = head; i->next!=NULL; i = i->next){
        for(Node *j = i->next; j!=NULL; j = j->next){
            if(i->val < j->val){
                swap(i->val, j->val);
            }
        }
    }

    int index = size(head);
    if(size(head) == 1){
        cout<<head->val<<endl;
    }
    else{
        middle_element(head,index);
    }
    
    // printList(head);
    // cout<<endl;  



    return 0;
}