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
void min_value(Node *head){
    int min = INT_MAX;
    Node *tmp = head;

    while(tmp != NULL){
        if(tmp->val < min){
            min = tmp-> val;
        }
        tmp = tmp->next;
    }
    cout<<min<<" ";
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
  
    max_value(head); 
    min_value(head);

    

    
    return 0;
}