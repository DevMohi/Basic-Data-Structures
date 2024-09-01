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

//one way 
void max_value(Node *head){
    int max = INT_MIN;
    Node *tmp = head;

    while(tmp != NULL){
        if(tmp->val > max){
            max = tmp-> val;
        }
        tmp = tmp->next;
    }
    cout<<max<<" ";
}


void printList(Node *head){
    Node *tmp = head;
    while(tmp !=NULL){
        cout<<tmp->val<<" ";
        
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
  
    // max_value(head); 

    //another way

    int max =INT_MIN;
    for(Node *i = head; i!= NULL; i = i->next){
        if(i-> val > max){
            max = i->val;
        }
    }

    cout<<max<<" ";
    return 0;
}