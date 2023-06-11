//  Object create kore linked list create korle harai jai 
// Size Problem


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
    //Normal
    // Node head(10);


    //Dynamic -> returns a pointer
    Node* head = new Node(30);
    Node * a = new Node(20);


    //coz a nijei ekta pointer
    head->next = a;
    cout<<head->val<<endl;
    cout<<a->val<<endl;
    cout<<head->next->val<<endl;
    return 0;
}