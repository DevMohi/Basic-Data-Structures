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

//duplicates

void duplicates(Node *head){
    int count [101]= {0};
    Node *tmp = head;
    while(tmp !=NULL){
        count[tmp->val]++;
        tmp = tmp->next;
    }
    int flag = 0;
    for(int i=0;i<=100; i++){
        if(count[i]>1){
            flag = 1;
        }
    }
    if(flag){
        cout<<"There are duplicates in the list"<<endl;
    }
    else{
        cout<<"No there ar no duplicates"<<endl;
    }

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
    printList(head); 
    duplicates(head);
    
    return 0;
}