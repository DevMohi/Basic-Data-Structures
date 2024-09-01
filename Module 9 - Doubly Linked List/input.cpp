#include<bits/stdc++.h>
using namespace std;

class Node{
    public: 
        int val;
        Node* next;
        Node *prev;

    Node(int val){
        this-> val = val;
        this->next = NULL;
        this -> prev = NULL;
    }
};

void insertTail(Node *&head, Node *&tail , int v){
    Node *newNode = new Node(v);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail ->next = newNode;
    newNode -> prev = tail;
    tail = tail->next; 
}

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



int main(){
    Node * head= NULL;
    Node * tail =NULL;
    int val;
    while(true){
        cin>>val;
        if(val == -1){
            break;
        }
        insertTail(head,tail,val);
    }
    printNormal(head);
    printReverse(tail);
    return 0;
}