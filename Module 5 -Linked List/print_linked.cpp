#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node *next;

    Node(int val){
        this ->val = val;
        this ->next = NULL;
    }
};

int main(){
    Node * head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;
    a->next = b;

    Node * tmp = head;
    while(tmp != NULL){
        
        cout<<tmp -> val<< endl;
        tmp = tmp->next;
    }
    tmp = head;
    while(tmp != NULL){
        
        cout<<tmp -> val<< endl;
        tmp = tmp->next;
    }


    return 0;
}