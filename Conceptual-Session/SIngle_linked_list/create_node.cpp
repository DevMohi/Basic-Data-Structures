#include<bits/stdc++.h>
using namespace std;

//user defined data type
class Node{ 
    public: 
        int val;
        //This is an address so need Node pointer. 
        Node* next;

        Node(int val){
            this->val = val;
            //By default
            this->next= NULL;
        }
};

//Linked list can increase its size on runtime. 
//Linked list saves memory.

int main(){
    //3 nodes created
    Node* a = new Node(5);
    Node* b = new Node(10);
    Node* c = new Node(15);

    //setting next
    //b is address
    a-> next = b;
    b-> next = c;
    c-> next = NULL; //optional because by default it is null. 


    //Print

    Node *tmp = a;
    while(tmp !=NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    
    return 0;
}