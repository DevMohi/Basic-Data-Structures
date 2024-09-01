#include<bits/stdc++.h>
using namespace std;


//Aitar input O(N) e chole ar 10*6 porjonto cholano jabe 
class Node{
    public: 
        int val;
        Node* next;

    Node(int val){
        this-> val = val;
        this->next = NULL;

    }
};

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

void printList(Node *head){
    Node *tmp = head;
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
}

int main(){
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while(true){
        cin>>val;
        if(val == -1){
            break;
        }
        insertTail(head,tail,val);
    }

    for(Node * i=head; i->next != NULL;i = i->next){
        // cout<<i->val<<" "; //aita jodi input 10  20 30 hoi tahole 10 20 output hobe  
        for(Node *j = i->next; j!=NULL ; j=j->next){
            // cout<<i->val<<" "<<j->val<<endl; 
            if(i-> val > j -> val){
                swap(i-> val, j-> val);
            }
        }
    }

    printList(head);

    return 0;
}