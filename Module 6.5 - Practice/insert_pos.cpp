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


int getSize(Node *head){
    Node *temp =  head;
    int count = 0;
    while(temp !=NULL){
        temp = temp->next;
        count++;
    }

    return count;
}



void insertAtHead(Node * &head, int val){
    Node *newNode = new Node(val);
    Node *tmp = head; 
    head = newNode;
    newNode->next = tmp;
    cout<<"Inserted At head"<<endl;
}



//Insert at any position

void insertAtAnyPos(Node* &head, int index, int val){
    Node *newNode = new Node(val);
    Node *tmp = head;

    int size = getSize(head);
    cout<<"This is size: "<< size<<endl; 

    if(index == 0){
        insertAtHead(head,val);
    }
    else if(index > getSize(head)){
        cout<<"Invalid"<<endl;
        return;
    }
    else{
        int pos = 0;
        while(pos != index-1){
            tmp = tmp->next;
            pos++;
        }
        Node *tmp2 = tmp->next;
        tmp->next = newNode;
        newNode->next = tmp2; 
        cout<<"Inserted"<<endl;
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
    int val;
    Node *head = NULL;
    while(true){
        cin >> val;
        if(val == -1){
            break;
        }
        insertAtTail(head,val);
    }

    int queries,index,values;
    cin>>queries; 

    for(int i=0; i<queries; i++){
        cin>>index>>values;
        insertAtAnyPos(head,index,values);
    }

    printList(head);


    //Insert at at any position
 
    return 0;
}


