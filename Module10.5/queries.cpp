// Question 4 : You have a doubly linked list which is empty initially. You need to take a value Q which refers to queries. For each query you will be given X and V. You will insert the value V to the Xth index of the doubly linked list and print the list in both left to right and right to left. If the index is invalid then print “Invalid”.

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


void insertAtHead(Node *&head, Node *&tail ,int val){
    Node * temp = head;
    Node * newNode = new Node(val);

    if(head == NULL){
        head = NULL;
        tail = NULL;
        return;
    }

    newNode -> next = head;
    head->prev = newNode;
    head = newNode;
    
}


void insertAtAnyPos(Node *&head, Node *&tail, int pos, int val){
    Node *newNode = new Node(val);
    Node *tmp =head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    
    newNode -> next = tmp -> next;
    tmp->next->prev = newNode;
    tmp->next = newNode;
    newNode -> prev =tmp;
}


int size(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
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

    int pos, val;
    cin >> pos >> val;
 
    if(pos == 1){
        insertAtHead(head,tail,val);
    }

    // if (pos > size(head) + 1)
    // {
    //     cout << "Invalid" << endl;
    // }
    // else if (pos == 0)
    // {
    //     insertAtHead(head, tail, val);
    // }
    // else if (pos == size(head) + 1)
    // {
    //     insertAtTail(head, tail, val);
    // }
    // else
    // {
    //     insertAtAnyPos(head,tail,pos,val);
    // }
    
    printList(head);
   

    return 0;
}