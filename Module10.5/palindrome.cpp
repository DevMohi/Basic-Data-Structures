// Question 3 : Take a doubly linked list as input and check if it forms any palindrome or not.
#include<bits/stdc++.h>
using namespace std;

class Node{
    public: 
        int val;
        Node* next;
        Node *prev;

    Node(int val){
        this-> val = val;
        this->next = NULL;
        this ->prev = NULL;
    }
};



void insertAtTail(Node *&head, Node *&tail , int val){
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail-> next = newNode; 
    newNode -> prev = tail; 
    tail = newNode;
}

//Checking palindrome

int palindrome(Node *head, Node *tail){
    Node *i = head;
    Node *j = tail;

    int flag =1;
    while(i !=j && i->next != j){
        if(i->val != j->val){
            flag = 0;
        }
        i = i->next;
        j = j->prev;

    }
    if(i -> val != j->val){
        flag = 0;
    }
    return flag;
}


void printList(Node *head){
    while(head != NULL){
        cout<<head -> val <<" ";
        head = head->next;  
    }
    cout<<endl;
}



int main(){
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while(true){
        cin>>val;
        if(val == -1){
            break;
        }
        insertAtTail(head,tail,val);
    }
    int checker = palindrome(head,tail);
    if(checker == 0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    // printList(head);

    return 0;
}