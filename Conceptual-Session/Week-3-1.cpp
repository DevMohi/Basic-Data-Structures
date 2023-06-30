#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int val;
        Node* prev;
        Node* next;

        //Setting value, prev and next 
        Node(int val){
            this->val = val;
            this->next = NULL;
            this->prev = NULL;
        }
};

//Getting the size of linked list
int getSize(Node *head){
    int count = 0;
    while(head != NULL){
        count++;
        head= head->next;
    }
    return count; 
}

/****************|Insert|****************/


//insert at tail
//Steps
//1) Change next
//2) Update previous
//3) update tail

void insertAtTail(Node *& head,Node *& tail, int val){
    //notun value toiri kortesi
    Node * newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    tail-> next = newNode; // 2A
    newNode -> prev = tail; //1A
    tail = newNode;  //aita ekon 2A tah point kortese

    //Another way
    // tail = tail->next;   
}

//Insert at head

//Steps
// 1) Newnode->next =  
// 2) prev_head = notun ta ke kore disi update

void insertAtHead(Node *& head,Node *& tail, int val){
    Node * newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    //better way
    Node *tmp = head;

    //NewNode er next e head er address rakbo na harabar jnno
    newNode->next = head; //1A

    //Current head er prev e newNode er address
    // head->prev = newNode; // 0A //1 way

    // Better way 
    tmp->prev = newNode;

    //head ke newNode banai di //0A
    head = newNode; 
}


//Insert at any position


//<----------Note------------>
//If user insert at position 1 we call the function
// insert at head

//if (size + 1) then call insertAtTail 


//This is based on 1 index, if you want to do with 0 just reduce the number by 1 
void insertAtAnyPos(Node *& head,Node *& tail, int pos, int val){
    Node *newNode = new Node(val);

    if(pos == 1){
        insertAtHead(head,tail,val);
    }
    else if(pos == getSize(head) + 1){
        insertAtTail(head,tail,val);
    }
    else{
        Node *newNode = new Node(val);
        Node * temp = head;
        for(int i= 1; i<pos-1; i++){
            temp = temp->next;
        }
        //Follow the sequence ar naile harai jabe
        //Age newNode set korsi
        newNode -> prev = temp; //1A
        newNode -> next = temp->next; //2A
        
        temp ->next -> prev = newNode; //2A
        temp->next =newNode;

    }
}

/****************|Delete|****************/

//delete from head

void deleteFromHead(Node *&head){
    if(head == NULL){
        cout<<"List already empty\n";
        return;
    }
    else{
        Node *deleteNode = head;

        //Update the NULL
        deleteNode->next->prev = NULL;

        //Update the head
        head = head->next;

        //Delete from memory
        delete deleteNode;
    }
}

//delete from tail

//Steps
// 1. Update prev node as null
// 2. Delete the node
// 3. Update the new Tail

void deleteFromTail(Node *&tail){
    if(tail == NULL){
        cout<<"List already empty";
        return;
    }
    else{
        Node *deleteNode = tail;
        tail->prev->next = NULL;
        tail = tail->prev;
        delete deleteNode;
    }
}

//delete at any pos

void deleteAtAnyPos(Node *&head, Node *&tail, int pos){
    Node* temp = head;
    for(int i=1; i<pos-1; i++){
        temp = temp->next;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    temp->next->prev = temp;
    delete deleteNode;
}


//print

void printList(Node *head ){
    Node *tmp = head;
    while(tmp !=NULL){
        cout<<tmp -> val <<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}


int main(){

    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while(true){
        cin>>val;
        if(val == -1) break;

        //Inserting at tail
        insertAtTail(head,tail,val); 

        //Insert at head
        // insertAtHead(head,tail,val);

    }
    // printList(head);
    // insertAtAnyPos(head,tail,1,5000);
    // printList(head);

    // insertAtAnyPos(head,tail,getSize(head) + 1,3000);
    // printList(head);

    // insertAtAnyPos(head,tail,2,15);
    // printList(head);

    // deleteFromHead(head); 
    // deleteFromTail(tail); 

    deleteAtAnyPos(head,tail,2);
    printList(head);

    return 0;
}