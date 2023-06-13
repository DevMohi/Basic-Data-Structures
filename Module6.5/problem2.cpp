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

//duplicates
void duplicates(Node *head){
    
    int count[101] = {0};
    Node *tmp = head;
    while(tmp != NULL){
        count[tmp->val]++;
        tmp = tmp->next;
    }

     int flag = 0;
    for(int i = 0; i <= 100; i++){
        if(count[i] > 1){
            flag = 1;
        }
    }
    if(flag)
        cout << "YES";
    else
        cout << "NO";
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
    duplicates(head);


 
    return 0;
}
