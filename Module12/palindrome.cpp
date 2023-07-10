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

void insertAtTail(Node *&head, Node*& tail, int val){
    Node * newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = tail->next;
}
void printList(Node *head){
    while(head !=NULL){
        cout<<head->val<<" ";
        head = head->next;
    }
}

void reverseList(Node *&head , Node* cur){
    if(cur->next == NULL){
        head = cur;
        return;
    }
    reverseList(head,cur->next);
    cur->next->next = cur; 
    cur->next = NULL;
}



int main(){
    Node *head = NULL;
    Node *tail = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;

    int val;

    while(true){
        cin>>val;
        if(val == -1){
            break;
        }
        insertAtTail(head,tail,val);
    }

    Node *tmp = head;
    while (tmp != NULL){
        insertAtTail(head2, tail2, tmp->val);
        tmp = tmp->next;
    }

    //Reversing the list
    reverseList(head2,head2);

    tmp = head;
    Node *tmp2 = head2;

    bool flag = true;
    while(tmp != NULL){
        if(tmp->val != tmp2->val){
            flag = false;
            break;
        }
        tmp = tmp->next;
        tmp2 = tmp2->next;
    }

    if(flag == true){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}