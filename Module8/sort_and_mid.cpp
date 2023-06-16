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

void printMid(Node* head){
    Node *tmp = head;
    int size = sizeCount(head);
    int middleSize =(size+1)/2; 

    
    for(int i=0; i<middleSize-1; i++){
            tmp = tmp->next;
    }
    if(size %2 != 0){
        cout<< tmp -> val <<" ";
    }
    else if( size %2 == 0){
        cout<< tmp -> val <<" ";
        tmp = tmp->next;
        cout<< tmp -> val <<" ";
     }
}




int main(){
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    
    while(true){
        cin>>val;
        if(val== -1){
            break;
        }
        insertTail(head,tail,val);
    }
    // printList(head); 

    for(Node *i = head; i->next!=NULL; i = i->next){
        for(Node *j = i->next; j!=NULL; j = j->next){
            if(i->val < j->val){
                swap(i->val, j->val);
            }
        }
    }

    printMid(head);
    // printList(head);   
    

    return 0;
}