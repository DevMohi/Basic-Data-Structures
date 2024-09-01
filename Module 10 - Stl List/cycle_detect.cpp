//Also known as hare and tortoise 

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


//cycle thakle print kora jaina


int main(){
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    
    head->next = a;
    a->next = b;
    b->next = c;
    // c->next = a; 
    c->next = NULL;
 
    Node *slow = head;
    Node *fast = head;
    bool flag = false; 

    while(fast  != NULL && fast -> next != NULL){
        //protome aita kora lagbe ar naile nicher condition apply hobe
        slow = slow->next;
        fast = fast->next->next; 
        if(fast == slow){
            flag = true;
            break; //loop break korte hobe naile infinity loop 
        }
    }

    if(flag == true){
        cout<<"Cycle detected"<<endl;
    }
    else{
        cout<<"Not cycle";
    }
    return 0;
}