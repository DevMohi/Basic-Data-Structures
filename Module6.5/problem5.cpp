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
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
       
    }
    cout<<endl;
} 


int sorted(Node *head) {
    Node *tmp = head;

    while (tmp != NULL && tmp->next != NULL) {
        if (tmp->val > tmp->next->val) {
            return 0;  // Not sorted in ascending order
        }
        tmp = tmp->next;
    }

    return 1;  // Sorted in ascending order
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

    int value = sorted(head);

    if(value == 1){
        cout<<"YES Sorted"<<endl;
    }
    else{
        cout<<"Not Sorted"<<endl;
    }


 
    return 0;
}
