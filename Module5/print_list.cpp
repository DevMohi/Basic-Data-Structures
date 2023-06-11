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


int main(){
    Node* head = new Node(0);
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);

    head-> next = a;
    a-> next = b;
    b-> next = c;
    c-> next = d;

    // cout<<head->val<<endl;
    // cout<<head->next->val<<endl; // a
    // cout<<head->next->next->val<<endl; // b

    
    // if we loop on head , we will lose the head value so

     Node *tmp = head;
     while(tmp !=NULL){
        cout<<tmp->val<<endl;
        tmp = tmp->next;
     }
     tmp = head; 
     while(tmp !=NULL){
        cout<<tmp->val<<endl;
        tmp = tmp->next;
     }



    return 0;
}