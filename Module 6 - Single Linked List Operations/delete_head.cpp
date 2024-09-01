#include<bits/stdc++.h>
//Full Code for insertion
using namespace std;

//Second code 

class Node{
    public: 
        int val;
        Node* next;

    Node(int val){
        this-> val = val;
        this->next = NULL;

    }
};

//Referemce nite hobe 
void insert_at_tail(Node * &head, int v){
    Node * newNode = new Node(v);
    if(head == NULL){
        head = newNode;
        cout<<endl<<endl<<"Inserted at head"<<endl<<endl;
        return;
    }

    Node *tmp = head;
    while(tmp ->next != NULL){
        tmp = tmp ->next;
    }
    //tmp ekon last node e
    tmp -> next = newNode;
    cout<<endl<<"Inserted at tail"<<endl<<endl;
}


//Enter in any position

void insert_at_pos(Node *&head, int pos, int v){
    Node *newNode = new Node(v);
    Node *tmp = head;
    for(int i=1;i<=pos-1; i++){
        tmp = tmp->next;
    }
    newNode ->next = tmp->next;
    tmp->next = newNode;
    cout<<endl<<endl<<"Inserted at position"<<" "<<pos<<endl<<endl;

}

void insert_at_head(Node *&head , int v){
    Node *newNode = new Node(v);
    newNode -> next = head;
    head = newNode;
    cout<<endl<<"Inserted at head"<<endl<<endl;
}

void delete_pos(Node *&head , int pos){
    Node *tmp = head;
    for(int i=1; i<=pos-1;i++){
        tmp = tmp->next;
    }
    Node * deleteNode = tmp->next; //value ta store raktesi na harabar jonno 
    tmp->next = tmp->next->next; //set kore felsi aikane
    delete deleteNode;
    cout<<endl<<"Deleted From position"<<" "<<pos<<endl<<endl;
}

void delete_head(Node *&head){
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
    cout<<endl<<"Deleted head"<<endl<<endl;
}


void print_linked_list(Node * head){
    cout<<endl;
    cout<<"Your Linked List: ";
    Node *tmp = head;
    while(tmp !=NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl<<endl;
}

int main(){
    Node *head = NULL;

    while(true){
        cout<<"Option 1: Insert at Tail"<<endl;
        cout<<"Option 2: Print Linked List"<<endl;
        cout<<"Option 3: Insert at any position"<<endl;
        cout<<"Option 4: Insert at head"<<endl;
        cout<<"Option 5: Delete from any position"<<endl;
        cout<<"Option 6: Delete head"<<endl;
        cout<<"Option 7: Terminate"<<endl;
        int op;
        cin>>op;
        if(op == 1){
            cout<<"Please Enter value: ";
            int v;
            cin>>v;
            insert_at_tail(head,v);
        }
        else if(op == 2){
            print_linked_list(head);  
        }
        else if(op == 3){
            int pos,v;
            cout<<"Enter Position: ";
            cin>>pos;
            cout<<"Enter value: ";
            cin>>v;
            if(pos == 0){
                insert_at_head(head,v);
            }
            else{
                insert_at_pos(head,pos,v);
            }
        }
        else if(op == 4){
            int v;
            cout<<"Enter value: ";
            cin>>v;
            insert_at_head(head,v); 
        }
        else if(op == 5){
            int pos;
            cout<<"Enter position: ";
            cin>>pos;
            if(pos == 0){
                delete_head(head);
            }
            else{
                delete_pos(head,pos);  
            }
        }
        else if(op == 6){
            delete_head(head);
        }
        else if(op == 7){
            break;
        }
    }



    return 0;
}