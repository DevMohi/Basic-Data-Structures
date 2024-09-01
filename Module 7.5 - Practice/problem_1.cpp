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

void printList(Node *head){
    Node *tmp = head;
    while(tmp !=NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
}

int size(Node *head){
    int count = 0;
    Node *tmp = head;
    while(tmp !=NULL){
        tmp = tmp->next;
        count++;
    }
    return count; 
}



int main(){
    Node *head = NULL;
    Node *head1 = NULL;

    Node *tail = NULL;
    Node *tail1 = NULL;

    int v;

    while(true){
        cin>>v;
        if(v == -1){
            break;
        }
        insertTail(head,tail,v);
    }    
    // printList(head);
    // cout<<endl;  

    int v1;
    while(true){
        cin>>v1;
        if(v1 == -1){
            break;
        }
        insertTail(head1,tail1,v1);
    }    
    // printList(head1);
    int count1 = size(head);
    int count2 = size(head1);

    if(count1 == count2){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}