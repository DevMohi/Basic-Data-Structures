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


void insertTail(Node *&head , Node* &tail , int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail-> next = newNode; 
    tail = newNode;
}

void printList(Node *head){
    Node *tmp = head;
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp =tmp->next;
    }
    cout<<endl;
}


int sizeCount(Node *head){
    Node *tmp = head;
    int count = 0;
    while(tmp != NULL){
        count++;
        tmp =tmp->next;
    }
    return count;
}


int main(){
    Node *head = NULL;
    Node *tail = NULL;

    Node *head2 = NULL;
    Node *tail2 = NULL;

    int val;
    
    while(true){
        cin>>val;
        if(val== -1){
            break;
        }
        insertTail(head,tail,val);
    }

    int val2;
    while(true){
        cin>>val2;
        if(val2== -1){
            break;
        }
        insertTail(head2,tail2,val2);
    }


    Node *i = head;
    Node *j = head2;

    bool flag = true;
    while(i != NULL && j!=NULL){

        if(i->val != j->val){
            flag = false;
            break;
        }

        i = i->next;
        j = j->next;
    }

    int count = sizeCount(head);
    int count2 = sizeCount(head2);
    if(flag == true && count == count2){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}