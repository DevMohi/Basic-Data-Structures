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

//Recursive printing 
void reverseList(Node *n){
    //base case
    if(n == NULL){
        return;
    }

    reverseList(n->next);
    cout<<n->val<<" ";

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

    reverseList(head);
    return 0;
}