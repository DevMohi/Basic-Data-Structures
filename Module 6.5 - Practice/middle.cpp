//Counting size 
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

void insert_at_tail(Node *&head, int v){
    Node *newNode = new Node(v);
    if(head == NULL){
        head = newNode;
        return;
    }


    Node *tmp = head;
    while(tmp -> next != NULL){
        tmp = tmp->next;
    }
    //ekon aita end e
    tmp -> next = newNode;
}

int getSize(Node *head){
    Node *temp =  head;
    int count = 0;
    while(temp !=NULL){
        temp = temp->next;
        count++;
    }

    return count;
}

void middle_element(Node *head, int count){
    cout<<endl;
    Node *tmp = head;
    int mid = count/2;
    
    
    if(count %2 != 0){
        for(int i=0;i<mid; i++){
            tmp = tmp->next;
        } 
        cout<<"Your middle element is: "<<tmp->val<<endl;
    }
    else if(count %2 == 0){
        for(int i=0;i<mid-1; i++){
            tmp = tmp->next;
        } 
        cout<<"Your middle element is: "<<tmp->val<<" ";
        tmp = tmp->next;
        cout<<tmp->val<<" "<<endl;
    }

    cout<<"Your size is: "<<count<<endl;

}

void print_linked_list(Node * head){
    cout<<endl;
    cout<<"Your Linked List : ";
    Node *tmp = head;
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl; 
}


int main(){
    Node * head = NULL;
    while(true){

        int v;
        cin>>v;
        if(v == -1){
            break;
        }
        insert_at_tail(head,v);
    }
    int count = getSize(head);
    middle_element(head,count);
    print_linked_list(head);
    
    return 0;
}