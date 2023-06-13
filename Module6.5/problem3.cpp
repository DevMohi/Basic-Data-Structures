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


//getSize

int getSize(Node *head){
    Node *temp =  head;
    int count = 0;
    while(temp !=NULL){
        temp = temp->next;
        count++;
    }

    return count;
}



void printList(Node *head){
    cout << endl;
    cout << "Your Linked List: ";
    Node *tmp = head;
    int size = getSize(head);
    int mainSize = size/2;

    if(size%2!=0){
        for(int i = 0; i < mainSize; i++){
            tmp = tmp->next;
        }
        cout<<tmp->val<<" ";
    }

    if(size %2 == 0){
        for(int i = 0; i < mainSize-1; i++){
            tmp = tmp->next;
        }
        cout<<tmp->val<<" ";
        tmp = tmp->next;
        cout<<tmp->val<<" ";
    }
    cout<<"Your size is: "<<size<<endl;
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


 
    return 0;
}
