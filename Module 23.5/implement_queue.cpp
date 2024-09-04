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


class myQueue{
    public: 
        Node * head = NULL;
        Node * tail = NULL;
        int sz = 0;

    bool isEmpty(){
        if(sz == 0) return true;
        else return false; 
    }

    void enqueue(int val){
        sz++;
        Node * newNode = new Node(val);
        if(head ==NULL){
            head = newNode;
            tail = newNode;
            return; 
        }
        tail -> next = newNode;
        tail = tail->next; 
    }

    int dequeue(){
        if(isEmpty()){
            return -1;
        }
        else{
            sz--;
            Node *deleteNode = head; 
            int deletedValue = deleteNode -> val; 
            head = head-> next; 
            delete deleteNode;
            if(head == NULL){
                tail = NULL;
            } 
            return deletedValue; 
        }
    }   
    int front(){
        if(isEmpty()){
            return -1;
        }
        else{
            return head -> val; 
        }
    }
};



int main(){
    
    return 0;
}