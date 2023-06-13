// Take a linked list as input and count its size 
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

void insertAtTail(Node* &head, int val){
    Node *newNode = new Node(val);

    if(head == NULL){
        head = newNode;
        return;
    }
    
    Node *tmp = head;
    while(tmp->next !=NULL){
        tmp = tmp->next;
    }
    tmp->next = newNode;
}


void printList(Node *head){
    cout << endl;
    cout << "Your Linked List: ";
    Node *tmp = head;
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
       
    }
    cout<<endl;
} 

//getSize

int getSize(Node *head){
    int count = 0;
    Node *tmp = head;
    while(tmp->next !=NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
        count++;
    }
    return count; 
}



int main(){
    int val;
    Node *head = NULL;
    while(true){

        cin >> val;
        if(val == -1){
            break;
        }
        insertAtTail(head,val);
    }
    printList(head);


    int size = getSize(head);
    cout<<"Your size :"<<size<<endl;
 
    return 0;
}




