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

    int val;
    
    while(true){
        cin>>val;
        if(val== -1){
            break;
        }
        insertTail(head,tail,val);
    }


    int max =INT_MIN;
    int min = INT_MAX;
    for(Node* i = head; i!= NULL ; i = i->next){
        if(i->val > max){
            max = i->val;
        }
    }
    for(Node* i = head; i!= NULL ; i = i->next){
        if(i->val < min){
            min = i->val;
        }
    }

    // int count = sizeCount(head);

    cout<<max<<" "<<min<<" "; 
     
    return 0;
}