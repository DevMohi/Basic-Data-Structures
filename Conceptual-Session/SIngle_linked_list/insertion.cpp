//Insert a node at tail

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


//Insert at tail to build linked list. 

void insert_at_tail(Node *&head , int val){
    Node* newNode = new Node(val);

    if(head == NULL){
        head = newNode;
        return;
    }

    Node *tmp = head;
    while(tmp-> next != NULL){
        tmp = tmp-> next; 
    }
    tmp->next = newNode;
}

//insert at head 

void insertAtHead(Node* &head ,int val){
    Node* newNode = new Node(val);

    //Jodi kono node create kora na thake
    if(head == NULL){
        head = newNode; 
        return;
    }

    Node *tmp = head;
    head = newNode;
    newNode -> next =tmp;

}

//Counting the size of linked list. 
int getSize(Node *head){
    //Update korar kichu na thakle address diona
    Node *temp =  head;
    int count = 0;
    while(temp !=NULL){
        temp = temp->next;
        count++;
    }

    return count;
}

//insert at any position
void insertAnyPos(Node *&head , int index, int val){
    Node * newNode = new Node(val);
    //Corner case
    if(index == 1){
        insertAtHead(head,val);
    }
    //adding at last index tail 
    else if(index == getSize(head)){
        insert_at_tail(head, val);
    }

    else{
        Node* tmp = head; 
        int pos = 1; 
        while(pos != index-1){
            tmp = tmp->next;
            pos++;
        }
        // //temp orignal position er value raksi
        Node* tmp2 = tmp->next; 
        tmp->next = newNode;
        newNode->next = tmp2;
    }
}

void print_list(Node *head){
    Node *tmp = head;
    while(tmp !=NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}

int main(){

    Node *head = NULL;
    insert_at_tail(head,10);
    insert_at_tail(head,20);
    insert_at_tail(head,30);

    //Insert at head
    insertAtHead(head, 60);

    //Inserting at any position
    insertAnyPos(head,1,100);
    insertAnyPos(head,5, 120);
    insertAnyPos(head,3, 520); 
    insertAnyPos(head,2, 0); 

    print_list(head);

    cout<<getSize(head)<<endl;
    
    return 0;
}